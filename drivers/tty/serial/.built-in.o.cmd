cmd_drivers/tty/serial/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/tty/serial/built-in.o drivers/tty/serial/serial_core.o drivers/tty/serial/earlycon.o ; scripts/mod/modpost drivers/tty/serial/built-in.o