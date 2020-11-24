cmd_crypto/xor.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o crypto/xor.ko crypto/xor.o crypto/xor.mod.o ;  true
