cmd_fs/jfs/jfs.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o fs/jfs/jfs.ko fs/jfs/jfs.o fs/jfs/jfs.mod.o ;  true
