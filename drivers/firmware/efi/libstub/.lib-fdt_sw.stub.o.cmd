cmd_drivers/firmware/efi/libstub/lib-fdt_sw.stub.o := if aarch64-linux-gnu-strip --strip-debug -R *ksymtab* -R *kcrctab* -o drivers/firmware/efi/libstub/lib-fdt_sw.stub.o drivers/firmware/efi/libstub/lib-fdt_sw.o; then if aarch64-linux-gnu-objdump -r drivers/firmware/efi/libstub/lib-fdt_sw.stub.o | grep R_AARCH64_ABS; then (echo >&2 "drivers/firmware/efi/libstub/lib-fdt_sw.stub.o: absolute symbol references not allowed in the EFI stub"; rm -f drivers/firmware/efi/libstub/lib-fdt_sw.stub.o; /bin/false); else aarch64-linux-gnu-objcopy --prefix-alloc-sections=.init --prefix-symbols=__efistub_ drivers/firmware/efi/libstub/lib-fdt_sw.o drivers/firmware/efi/libstub/lib-fdt_sw.stub.o; fi else /bin/false; fi
