cmd_drivers/md/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/md/built-in.o drivers/md/dm-builtin.o ; scripts/mod/modpost drivers/md/built-in.o
