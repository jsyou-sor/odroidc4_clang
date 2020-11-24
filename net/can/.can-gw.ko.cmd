cmd_net/can/can-gw.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/can/can-gw.ko net/can/can-gw.o net/can/can-gw.mod.o ;  true
