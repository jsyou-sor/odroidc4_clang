cmd_net/rfkill/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o net/rfkill/built-in.o net/rfkill/rfkill.o ; scripts/mod/modpost net/rfkill/built-in.o
