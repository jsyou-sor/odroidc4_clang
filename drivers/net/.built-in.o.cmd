cmd_drivers/net/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/net/built-in.o drivers/net/mii.o drivers/net/Space.o drivers/net/loopback.o drivers/net/phy/built-in.o drivers/net/veth.o drivers/net/ethernet/built-in.o drivers/net/wireless/built-in.o drivers/net/usb/built-in.o ; scripts/mod/modpost drivers/net/built-in.o
