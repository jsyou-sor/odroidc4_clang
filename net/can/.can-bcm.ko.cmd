cmd_net/can/can-bcm.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/can/can-bcm.ko net/can/can-bcm.o net/can/can-bcm.mod.o ;  true