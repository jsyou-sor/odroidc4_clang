cmd_drivers/media/common/tveeprom.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/media/common/tveeprom.ko drivers/media/common/tveeprom.o drivers/media/common/tveeprom.mod.o ;  true