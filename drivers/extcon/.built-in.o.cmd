cmd_drivers/extcon/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/extcon/built-in.o drivers/extcon/extcon-core.o ; scripts/mod/modpost drivers/extcon/built-in.o
