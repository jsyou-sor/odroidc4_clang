cmd_drivers/firmware/efi/libstub/arm64-stub.stub.o := if aarch64-linux-gnu-strip --strip-debug -R *ksymtab* -R *kcrctab* -o drivers/firmware/efi/libstub/arm64-stub.stub.o drivers/firmware/efi/libstub/arm64-stub.o; then if aarch64-linux-gnu-objdump -r drivers/firmware/efi/libstub/arm64-stub.stub.o | grep R_AARCH64_ABS; then (echo >&2 "drivers/firmware/efi/libstub/arm64-stub.stub.o: absolute symbol references not allowed in the EFI stub"; rm -f drivers/firmware/efi/libstub/arm64-stub.stub.o; /bin/false); else aarch64-linux-gnu-objcopy --prefix-alloc-sections=.init --prefix-symbols=__efistub_ drivers/firmware/efi/libstub/arm64-stub.o drivers/firmware/efi/libstub/arm64-stub.stub.o; fi else /bin/false; fi
