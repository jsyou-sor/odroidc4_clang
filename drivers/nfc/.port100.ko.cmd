cmd_drivers/nfc/port100.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/nfc/port100.ko drivers/nfc/port100.o drivers/nfc/port100.mod.o ;  true
