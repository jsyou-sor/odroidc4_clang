cmd_drivers/bluetooth/btintel.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/bluetooth/btintel.ko drivers/bluetooth/btintel.o drivers/bluetooth/btintel.mod.o ;  true
