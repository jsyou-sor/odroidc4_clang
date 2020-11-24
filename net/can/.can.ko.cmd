cmd_net/can/can.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/can/can.ko net/can/can.o net/can/can.mod.o ;  true
