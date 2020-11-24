cmd_drivers/nvmem/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/nvmem/built-in.o drivers/nvmem/nvmem_core.o ; scripts/mod/modpost drivers/nvmem/built-in.o
