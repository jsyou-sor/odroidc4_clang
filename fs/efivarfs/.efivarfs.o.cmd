cmd_fs/efivarfs/efivarfs.o := aarch64-linux-gnu-ld -EL    -r -o fs/efivarfs/efivarfs.o fs/efivarfs/inode.o fs/efivarfs/file.o fs/efivarfs/super.o ; scripts/mod/modpost fs/efivarfs/efivarfs.o
