cmd_net/netfilter/xt_dccp.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/netfilter/xt_dccp.ko net/netfilter/xt_dccp.o net/netfilter/xt_dccp.mod.o ;  true