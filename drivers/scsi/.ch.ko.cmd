cmd_drivers/scsi/ch.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/scsi/ch.ko drivers/scsi/ch.o drivers/scsi/ch.mod.o ;  true