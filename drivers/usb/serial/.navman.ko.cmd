cmd_drivers/usb/serial/navman.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/usb/serial/navman.ko drivers/usb/serial/navman.o drivers/usb/serial/navman.mod.o ;  true
