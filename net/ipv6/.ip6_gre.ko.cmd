cmd_net/ipv6/ip6_gre.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/ipv6/ip6_gre.ko net/ipv6/ip6_gre.o net/ipv6/ip6_gre.mod.o ;  true
