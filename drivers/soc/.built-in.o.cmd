cmd_drivers/soc/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/soc/built-in.o drivers/soc/bcm/built-in.o drivers/soc/fsl/built-in.o ; scripts/mod/modpost drivers/soc/built-in.o
