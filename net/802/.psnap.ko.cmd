cmd_net/802/psnap.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/802/psnap.ko net/802/psnap.o net/802/psnap.mod.o ;  true
