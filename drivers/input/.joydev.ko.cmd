cmd_drivers/input/joydev.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/input/joydev.ko drivers/input/joydev.o drivers/input/joydev.mod.o ;  true