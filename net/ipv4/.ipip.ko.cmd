cmd_net/ipv4/ipip.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/ipv4/ipip.ko net/ipv4/ipip.o net/ipv4/ipip.mod.o ;  true
