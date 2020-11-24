cmd_net/802/garp.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/802/garp.ko net/802/garp.o net/802/garp.mod.o ;  true
