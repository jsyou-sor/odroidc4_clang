cmd_drivers/media/v4l2-core/tuner.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/media/v4l2-core/tuner.ko drivers/media/v4l2-core/tuner.o drivers/media/v4l2-core/tuner.mod.o ;  true