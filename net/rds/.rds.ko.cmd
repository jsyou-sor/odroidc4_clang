cmd_net/rds/rds.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/rds/rds.ko net/rds/rds.o net/rds/rds.mod.o ;  true
