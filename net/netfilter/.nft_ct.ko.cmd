cmd_net/netfilter/nft_ct.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/netfilter/nft_ct.ko net/netfilter/nft_ct.o net/netfilter/nft_ct.mod.o ;  true
