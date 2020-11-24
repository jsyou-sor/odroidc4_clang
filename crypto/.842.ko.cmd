cmd_crypto/842.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o crypto/842.ko crypto/842.o crypto/842.mod.o ;  true
