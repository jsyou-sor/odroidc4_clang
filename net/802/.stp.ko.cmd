cmd_net/802/stp.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/802/stp.ko net/802/stp.o net/802/stp.mod.o ;  true
