cmd_net/ipv6/ila/ila.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/ipv6/ila/ila.ko net/ipv6/ila/ila.o net/ipv6/ila/ila.mod.o ;  true
