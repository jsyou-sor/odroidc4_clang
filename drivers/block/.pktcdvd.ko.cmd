cmd_drivers/block/pktcdvd.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/block/pktcdvd.ko drivers/block/pktcdvd.o drivers/block/pktcdvd.mod.o ;  true
