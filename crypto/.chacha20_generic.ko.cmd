cmd_crypto/chacha20_generic.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o crypto/chacha20_generic.ko crypto/chacha20_generic.o crypto/chacha20_generic.mod.o ;  true