cmd_net/netfilter/xt_u32.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/netfilter/xt_u32.ko net/netfilter/xt_u32.o net/netfilter/xt_u32.mod.o ;  true