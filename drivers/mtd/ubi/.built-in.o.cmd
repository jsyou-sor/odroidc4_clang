cmd_drivers/mtd/ubi/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/mtd/ubi/built-in.o drivers/mtd/ubi/ubi.o ; scripts/mod/modpost drivers/mtd/ubi/built-in.o
