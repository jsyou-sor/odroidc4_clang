cmd_net/802/mrp.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/802/mrp.ko net/802/mrp.o net/802/mrp.mod.o ;  true
