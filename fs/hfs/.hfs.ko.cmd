cmd_fs/hfs/hfs.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o fs/hfs/hfs.ko fs/hfs/hfs.o fs/hfs/hfs.mod.o ;  true
