cmd_drivers/block/nbd.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/block/nbd.ko drivers/block/nbd.o drivers/block/nbd.mod.o ;  true