cmd_net/netfilter/nf_nat_ftp.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/netfilter/nf_nat_ftp.ko net/netfilter/nf_nat_ftp.o net/netfilter/nf_nat_ftp.mod.o ;  true