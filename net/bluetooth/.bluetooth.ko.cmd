cmd_net/bluetooth/bluetooth.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/bluetooth/bluetooth.ko net/bluetooth/bluetooth.o net/bluetooth/bluetooth.mod.o ;  true
