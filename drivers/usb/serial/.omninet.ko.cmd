cmd_drivers/usb/serial/omninet.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/usb/serial/omninet.ko drivers/usb/serial/omninet.o drivers/usb/serial/omninet.mod.o ;  true