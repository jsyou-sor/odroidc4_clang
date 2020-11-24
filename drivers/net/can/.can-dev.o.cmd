cmd_drivers/net/can/can-dev.o := aarch64-linux-gnu-ld -EL    -r -o drivers/net/can/can-dev.o drivers/net/can/dev.o drivers/net/can/led.o ; scripts/mod/modpost drivers/net/can/can-dev.o
