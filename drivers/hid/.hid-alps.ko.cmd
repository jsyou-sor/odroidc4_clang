cmd_drivers/hid/hid-alps.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/hid/hid-alps.ko drivers/hid/hid-alps.o drivers/hid/hid-alps.mod.o ;  true