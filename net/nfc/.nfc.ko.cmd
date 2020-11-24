cmd_net/nfc/nfc.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/nfc/nfc.ko net/nfc/nfc.o net/nfc/nfc.mod.o ;  true
