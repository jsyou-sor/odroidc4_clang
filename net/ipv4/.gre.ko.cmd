cmd_net/ipv4/gre.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/ipv4/gre.ko net/ipv4/gre.o net/ipv4/gre.mod.o ;  true
