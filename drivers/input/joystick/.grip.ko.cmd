cmd_drivers/input/joystick/grip.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/input/joystick/grip.ko drivers/input/joystick/grip.o drivers/input/joystick/grip.mod.o ;  true
