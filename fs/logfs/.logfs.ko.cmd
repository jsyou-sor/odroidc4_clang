cmd_fs/logfs/logfs.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o fs/logfs/logfs.ko fs/logfs/logfs.o fs/logfs/logfs.mod.o ;  true
