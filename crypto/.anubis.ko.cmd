cmd_crypto/anubis.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o crypto/anubis.ko crypto/anubis.o crypto/anubis.mod.o ;  true
