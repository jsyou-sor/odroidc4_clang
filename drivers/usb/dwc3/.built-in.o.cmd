cmd_drivers/usb/dwc3/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/usb/dwc3/built-in.o drivers/usb/dwc3/dwc3.o drivers/usb/dwc3/dwc3-of-simple.o ; scripts/mod/modpost drivers/usb/dwc3/built-in.o
