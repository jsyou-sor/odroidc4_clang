cmd_crypto/seed.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o crypto/seed.ko crypto/seed.o crypto/seed.mod.o ;  true
