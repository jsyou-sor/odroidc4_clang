cmd_fs/exfat/exfat.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o fs/exfat/exfat.ko fs/exfat/exfat.o fs/exfat/exfat.mod.o ;  true
