cmd_net/netfilter/nf_conntrack_tftp.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/netfilter/nf_conntrack_tftp.ko net/netfilter/nf_conntrack_tftp.o net/netfilter/nf_conntrack_tftp.mod.o ;  true