cmd_net/ipv4/fou.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/ipv4/fou.ko net/ipv4/fou.o net/ipv4/fou.mod.o ;  true
