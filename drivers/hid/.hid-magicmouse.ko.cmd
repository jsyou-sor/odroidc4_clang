cmd_drivers/hid/hid-magicmouse.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/hid/hid-magicmouse.ko drivers/hid/hid-magicmouse.o drivers/hid/hid-magicmouse.mod.o ;  true
