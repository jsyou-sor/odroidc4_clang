cmd_net/switchdev/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o net/switchdev/built-in.o net/switchdev/switchdev.o ; scripts/mod/modpost net/switchdev/built-in.o
