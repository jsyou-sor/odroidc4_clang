cmd_net/atm/clip.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/atm/clip.ko net/atm/clip.o net/atm/clip.mod.o ;  true
