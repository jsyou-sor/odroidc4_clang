cmd_fs/cramfs/cramfs.o := aarch64-linux-gnu-ld -EL    -r -o fs/cramfs/cramfs.o fs/cramfs/inode.o fs/cramfs/uncompress.o ; scripts/mod/modpost fs/cramfs/cramfs.o
