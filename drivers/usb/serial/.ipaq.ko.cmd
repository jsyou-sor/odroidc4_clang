cmd_drivers/usb/serial/ipaq.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/usb/serial/ipaq.ko drivers/usb/serial/ipaq.o drivers/usb/serial/ipaq.mod.o ;  true