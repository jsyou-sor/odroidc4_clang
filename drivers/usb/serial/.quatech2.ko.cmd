cmd_drivers/usb/serial/quatech2.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/usb/serial/quatech2.ko drivers/usb/serial/quatech2.o drivers/usb/serial/quatech2.mod.o ;  true