cmd_fs/ubifs/ubifs.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o fs/ubifs/ubifs.ko fs/ubifs/ubifs.o fs/ubifs/ubifs.mod.o ;  true
