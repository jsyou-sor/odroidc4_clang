cmd_drivers/spi/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/spi/built-in.o drivers/spi/spi.o drivers/spi/spi-bitbang.o drivers/spi/spi-gpio.o ; scripts/mod/modpost drivers/spi/built-in.o
