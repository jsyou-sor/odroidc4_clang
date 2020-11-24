cmd_crypto/speck.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o crypto/speck.ko crypto/speck.o crypto/speck.mod.o ;  true
