cmd_drivers/md/dm-raid.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/md/dm-raid.ko drivers/md/dm-raid.o drivers/md/dm-raid.mod.o ;  true
