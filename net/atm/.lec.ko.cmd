cmd_net/atm/lec.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/atm/lec.ko net/atm/lec.o net/atm/lec.mod.o ;  true
