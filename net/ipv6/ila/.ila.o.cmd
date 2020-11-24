cmd_net/ipv6/ila/ila.o := aarch64-linux-gnu-ld -EL    -r -o net/ipv6/ila/ila.o net/ipv6/ila/ila_common.o net/ipv6/ila/ila_lwt.o net/ipv6/ila/ila_xlat.o ; scripts/mod/modpost net/ipv6/ila/ila.o
