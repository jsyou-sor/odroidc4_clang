cmd_drivers/usb/serial/ftdi_sio.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/usb/serial/ftdi_sio.ko drivers/usb/serial/ftdi_sio.o drivers/usb/serial/ftdi_sio.mod.o ;  true
