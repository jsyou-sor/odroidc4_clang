cmd_fs/lockd/lockd.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o fs/lockd/lockd.ko fs/lockd/lockd.o fs/lockd/lockd.mod.o ;  true
