cmd_net/phonet/phonet.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/phonet/phonet.ko net/phonet/phonet.o net/phonet/phonet.mod.o ;  true