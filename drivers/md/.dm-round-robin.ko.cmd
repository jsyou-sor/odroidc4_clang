cmd_drivers/md/dm-round-robin.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/md/dm-round-robin.ko drivers/md/dm-round-robin.o drivers/md/dm-round-robin.mod.o ;  true
