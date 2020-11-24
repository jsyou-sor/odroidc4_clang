cmd_fs/ntfs/ntfs.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o fs/ntfs/ntfs.ko fs/ntfs/ntfs.o fs/ntfs/ntfs.mod.o ;  true
