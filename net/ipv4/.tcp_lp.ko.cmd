cmd_net/ipv4/tcp_lp.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/ipv4/tcp_lp.ko net/ipv4/tcp_lp.o net/ipv4/tcp_lp.mod.o ;  true