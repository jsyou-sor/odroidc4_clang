cmd_net/6lowpan/nhc_ipv6.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/6lowpan/nhc_ipv6.ko net/6lowpan/nhc_ipv6.o net/6lowpan/nhc_ipv6.mod.o ;  true