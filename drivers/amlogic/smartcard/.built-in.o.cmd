cmd_drivers/amlogic/smartcard/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/amlogic/smartcard/built-in.o drivers/amlogic/smartcard/amsmc.o ; scripts/mod/modpost drivers/amlogic/smartcard/built-in.o