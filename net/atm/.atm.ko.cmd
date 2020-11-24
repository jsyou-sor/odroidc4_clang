cmd_net/atm/atm.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/atm/atm.ko net/atm/atm.o net/atm/atm.mod.o ;  true
