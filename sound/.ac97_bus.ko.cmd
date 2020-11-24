cmd_sound/ac97_bus.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o sound/ac97_bus.ko sound/ac97_bus.o sound/ac97_bus.mod.o ;  true
