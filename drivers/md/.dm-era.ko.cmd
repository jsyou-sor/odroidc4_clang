cmd_drivers/md/dm-era.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/md/dm-era.ko drivers/md/dm-era.o drivers/md/dm-era.mod.o ;  true