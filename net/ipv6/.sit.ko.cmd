cmd_net/ipv6/sit.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/ipv6/sit.ko net/ipv6/sit.o net/ipv6/sit.mod.o ;  true
