cmd_drivers/hid/hid-tmff.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/hid/hid-tmff.ko drivers/hid/hid-tmff.o drivers/hid/hid-tmff.mod.o ;  true
