cmd_drivers/uio/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/uio/built-in.o drivers/uio/uio.o drivers/uio/uio_pdrv_genirq.o ; scripts/mod/modpost drivers/uio/built-in.o
