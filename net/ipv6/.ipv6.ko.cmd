cmd_net/ipv6/ipv6.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/ipv6/ipv6.ko net/ipv6/ipv6.o net/ipv6/ipv6.mod.o ;  true
