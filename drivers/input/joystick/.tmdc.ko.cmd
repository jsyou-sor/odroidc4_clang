cmd_drivers/input/joystick/tmdc.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/input/joystick/tmdc.ko drivers/input/joystick/tmdc.o drivers/input/joystick/tmdc.mod.o ;  true