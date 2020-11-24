cmd_crypto/lz4hc.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o crypto/lz4hc.ko crypto/lz4hc.o crypto/lz4hc.mod.o ;  true
