cmd_drivers/hid/hid-twinhan.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/hid/hid-twinhan.ko drivers/hid/hid-twinhan.o drivers/hid/hid-twinhan.mod.o ;  true