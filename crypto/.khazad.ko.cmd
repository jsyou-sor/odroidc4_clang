cmd_crypto/khazad.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o crypto/khazad.ko crypto/khazad.o crypto/khazad.mod.o ;  true
