cmd_fs/ecryptfs/ecryptfs.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o fs/ecryptfs/ecryptfs.ko fs/ecryptfs/ecryptfs.o fs/ecryptfs/ecryptfs.mod.o ;  true
