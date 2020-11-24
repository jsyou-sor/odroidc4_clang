cmd_fs/coda/coda.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o fs/coda/coda.ko fs/coda/coda.o fs/coda/coda.mod.o ;  true
