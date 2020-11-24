cmd_net/ethernet/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o net/ethernet/built-in.o net/ethernet/eth.o ; scripts/mod/modpost net/ethernet/built-in.o
