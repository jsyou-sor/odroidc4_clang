cmd_drivers/ptp/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/ptp/built-in.o drivers/ptp/ptp.o ; scripts/mod/modpost drivers/ptp/built-in.o
