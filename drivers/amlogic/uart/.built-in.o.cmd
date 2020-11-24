cmd_drivers/amlogic/uart/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/amlogic/uart/built-in.o drivers/amlogic/uart/meson_uart.o ; scripts/mod/modpost drivers/amlogic/uart/built-in.o
