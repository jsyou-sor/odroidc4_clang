cmd_drivers/input/joystick/xpad.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/input/joystick/xpad.ko drivers/input/joystick/xpad.o drivers/input/joystick/xpad.mod.o ;  true
