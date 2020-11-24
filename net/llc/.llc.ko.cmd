cmd_net/llc/llc.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/llc/llc.ko net/llc/llc.o net/llc/llc.mod.o ;  true
