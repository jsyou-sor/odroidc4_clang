cmd_drivers/net/netconsole.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/net/netconsole.ko drivers/net/netconsole.o drivers/net/netconsole.mod.o ;  true