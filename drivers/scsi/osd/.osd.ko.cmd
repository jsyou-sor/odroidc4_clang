cmd_drivers/scsi/osd/osd.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/scsi/osd/osd.ko drivers/scsi/osd/osd.o drivers/scsi/osd/osd.mod.o ;  true
