cmd_crypto/md4.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o crypto/md4.ko crypto/md4.o crypto/md4.mod.o ;  true
