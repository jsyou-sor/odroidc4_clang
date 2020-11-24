cmd_fs/affs/affs.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o fs/affs/affs.ko fs/affs/affs.o fs/affs/affs.mod.o ;  true
