cmd_fs/fscache/fscache.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o fs/fscache/fscache.ko fs/fscache/fscache.o fs/fscache/fscache.mod.o ;  true
