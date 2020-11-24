cmd_drivers/w1/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/w1/built-in.o drivers/w1/masters/built-in.o drivers/w1/slaves/built-in.o ; scripts/mod/modpost drivers/w1/built-in.o
