cmd_drivers/spi/spi-meson-spicc.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/spi/spi-meson-spicc.ko drivers/spi/spi-meson-spicc.o drivers/spi/spi-meson-spicc.mod.o ;  true