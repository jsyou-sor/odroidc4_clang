cmd_drivers/net/gtp.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/net/gtp.ko drivers/net/gtp.o drivers/net/gtp.mod.o ;  true
