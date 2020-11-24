cmd_drivers/mtd/spi-nor/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/mtd/spi-nor/built-in.o drivers/mtd/spi-nor/spi-nor.o ; scripts/mod/modpost drivers/mtd/spi-nor/built-in.o
