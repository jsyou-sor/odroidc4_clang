cmd_drivers/usb/class/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/usb/class/built-in.o drivers/usb/class/cdc-acm.o ; scripts/mod/modpost drivers/usb/class/built-in.o
