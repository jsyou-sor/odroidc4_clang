cmd_net/8021q/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o net/8021q/built-in.o net/8021q/vlan_core.o ; scripts/mod/modpost net/8021q/built-in.o
