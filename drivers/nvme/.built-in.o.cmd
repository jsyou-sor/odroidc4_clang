cmd_drivers/nvme/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/nvme/built-in.o drivers/nvme/host/built-in.o drivers/nvme/target/built-in.o ; scripts/mod/modpost drivers/nvme/built-in.o
