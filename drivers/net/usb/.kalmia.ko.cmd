cmd_drivers/net/usb/kalmia.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/net/usb/kalmia.ko drivers/net/usb/kalmia.o drivers/net/usb/kalmia.mod.o ;  true