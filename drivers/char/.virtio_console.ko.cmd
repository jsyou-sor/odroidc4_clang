cmd_drivers/char/virtio_console.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/char/virtio_console.ko drivers/char/virtio_console.o drivers/char/virtio_console.mod.o ;  true
