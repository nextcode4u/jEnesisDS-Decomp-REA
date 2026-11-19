// Configure the jEnesisDS 0.7.4 RAM layout before Ghidra auto-analysis.
//@category Nintendo DS

import ghidra.app.cmd.disassemble.ArmDisassembleCommand;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.data.ArrayDataType;
import ghidra.program.model.data.DWordDataType;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.SourceType;

import java.io.ByteArrayInputStream;
import java.util.TreeSet;

public class PrepareJenesisAnalysis extends GhidraScript {
    private Address address(long offset) {
        return currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(offset);
    }

    private void seed(long location, boolean thumb, String name) throws Exception {
        Address start = address(location);
        ArmDisassembleCommand command = new ArmDisassembleCommand(start, null, thumb);
        if (!command.applyTo(currentProgram, monitor) ||
            currentProgram.getListing().getInstructionAt(start) == null) {
            throw new IllegalStateException("Could not disassemble " + start);
        }
        Function function = getFunctionAt(start);
        if (function == null) {
            function = createFunction(start, name);
        }
        if (function == null) {
            throw new IllegalStateException("Could not create " + name + " at " + start);
        }
        function.setName(name, SourceType.USER_DEFINED);
        currentProgram.getSymbolTable().addExternalEntryPoint(start);
    }

    private void seedDispatchTable(String name, long table, int slots) throws Exception {
        Address start = address(table);
        createLabel(start, name, true);
        currentProgram.getListing().setComment(start,
            CommentType.PRE,
            "Jump table with " + slots + " ARM-state target pointers.");

        TreeSet<Address> targets = new TreeSet<>();
        AddressSet seeds = new AddressSet();
        for (int i = 0; i < slots; i++) {
            long pointer = Integer.toUnsignedLong(currentProgram.getMemory().getInt(start.add(i * 4L)));
            Address destination = address(pointer);
            MemoryBlock block = currentProgram.getMemory().getBlock(destination);
            if ((pointer & 3) != 0 || block == null || !block.isExecute()) {
                throw new IllegalStateException("Invalid " + name + " slot " + i + ": " + destination);
            }
            if (targets.add(destination)) {
                seeds.add(destination);
            }
        }
        createData(start, new ArrayDataType(DWordDataType.dataType, slots, 4));
        new ArmDisassembleCommand(seeds, null, false).applyTo(currentProgram, monitor);
        int functions = 0;
        for (Address target : targets) {
            monitor.checkCancelled();
            if (getFunctionAt(target) == null && getInstructionAt(target) != null) {
                createFunction(target, name + "_" + target);
            }
            if (getFunctionAt(target) != null) {
                functions++;
            }
        }
        println(name + ": " + functions + " function entries across " + targets.size() + " unique destinations");
    }

    private void copyStartupRegion(String name, long source, long destination,
            long end, boolean executable) throws Exception {
        byte[] data = new byte[(int)(end - destination)];
        if (currentProgram.getMemory().getBytes(address(source), data) != data.length) {
            throw new IllegalStateException("Incomplete startup copy for " + name);
        }
        try (ByteArrayInputStream input = new ByteArrayInputStream(data)) {
            MemoryBlock block = currentProgram.getMemory().createInitializedBlock(
                name, address(destination), input, data.length, monitor, false);
            block.setExecute(executable);
            block.setWrite(true);
            block.setComment("Startup copy from " + address(source));
        }
    }

    private void bss(String name, long start, long end) throws Exception {
        MemoryBlock block = currentProgram.getMemory().createUninitializedBlock(
            name, address(start), end - start, false);
        block.setWrite(true);
        block.setExecute(false);
    }

    @Override
    protected void run() throws Exception {
        String cpu = getScriptArgs()[0];
        if (cpu.equals("arm9")) {
            // Addresses from the two copy calls at 020000ec and 020000fc.
            copyStartupRegion("itcm", 0x020936f0, 0x01000000, 0x01005880, true);
            copyStartupRegion("dtcm", 0x02090004, 0x0b000000, 0x0b0036ec, false);
            bss("main_bss", 0x02098f70, 0x023eb350);

            // Keep ROM-backed source bytes mapped while marking the copy sources as data.
            Address copySources = address(0x02090004);
            currentProgram.getMemory().split(currentProgram.getMemory().getBlock(copySources), copySources);
            currentProgram.getMemory().getBlock(copySources).setExecute(false);

            seed(0x02000000, false, "arm9_entry");
            seed(0x02082370, false, "arm9_startup_call_1");
            seed(0x020011e4, false, "arm9_main");
            // The Z80 dispatch loads from this pointer run via the literal at 0200e024.
            seedDispatchTable("z80_dispatch", 0x020153f0, 1328);
            // The 16-bit M68000 opcode selects one of these 65,536 pointers.
            seedDispatchTable("m68k_dispatch", 0x02032c28, 65536);
        }
        else if (cpu.equals("arm7")) {
            bss("arm7_bss", 0x03806d94, 0x0380becc);
            seed(0x037f8000, false, "arm7_entry");
            seed(0x03802524, false, "arm7_startup_call_1");
            seed(0x037f81f4, false, "arm7_main");
            seedDispatchTable("arm7_dispatch", 0x03800e50, 128);
        }
        else {
            throw new IllegalArgumentException("Unknown processor: " + cpu);
        }
    }
}
