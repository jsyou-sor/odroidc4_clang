cmd_drivers/input/gameport/gameport.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/input/gameport/gameport.ko drivers/input/gameport/gameport.o drivers/input/gameport/gameport.mod.o ;  true