cmd_drivers/net/usb/usbnet.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/net/usb/usbnet.ko drivers/net/usb/usbnet.o drivers/net/usb/usbnet.mod.o ;  true
