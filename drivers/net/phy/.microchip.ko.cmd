cmd_drivers/net/phy/microchip.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/net/phy/microchip.ko drivers/net/phy/microchip.o drivers/net/phy/microchip.mod.o ;  true