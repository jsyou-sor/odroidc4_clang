cmd_drivers/media/rc/lirc_dev.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/media/rc/lirc_dev.ko drivers/media/rc/lirc_dev.o drivers/media/rc/lirc_dev.mod.o ;  true