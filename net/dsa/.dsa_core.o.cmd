cmd_net/dsa/dsa_core.o := aarch64-linux-gnu-ld -EL    -r -o net/dsa/dsa_core.o net/dsa/dsa.o net/dsa/slave.o net/dsa/dsa2.o ; scripts/mod/modpost net/dsa/dsa_core.o
