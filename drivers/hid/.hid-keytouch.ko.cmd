cmd_drivers/hid/hid-keytouch.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/hid/hid-keytouch.ko drivers/hid/hid-keytouch.o drivers/hid/hid-keytouch.mod.o ;  true
