cmd_drivers/bluetooth/btrtl.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/bluetooth/btrtl.ko drivers/bluetooth/btrtl.o drivers/bluetooth/btrtl.mod.o ;  true
