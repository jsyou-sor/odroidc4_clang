cmd_drivers/md/dm-cache.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/md/dm-cache.ko drivers/md/dm-cache.o drivers/md/dm-cache.mod.o ;  true