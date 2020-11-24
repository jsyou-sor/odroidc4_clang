cmd_net/key/af_key.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/key/af_key.ko net/key/af_key.o net/key/af_key.mod.o ;  true
