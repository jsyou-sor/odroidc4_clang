cmd_drivers/usb/serial/sierra.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/usb/serial/sierra.ko drivers/usb/serial/sierra.o drivers/usb/serial/sierra.mod.o ;  true