cmd_crypto/cast_common.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o crypto/cast_common.ko crypto/cast_common.o crypto/cast_common.mod.o ;  true
