cmd_drivers/input/misc/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/input/misc/built-in.o drivers/input/misc/uinput.o ; scripts/mod/modpost drivers/input/misc/built-in.o
