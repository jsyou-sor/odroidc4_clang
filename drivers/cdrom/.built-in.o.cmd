cmd_drivers/cdrom/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/cdrom/built-in.o drivers/cdrom/cdrom.o ; scripts/mod/modpost drivers/cdrom/built-in.o
