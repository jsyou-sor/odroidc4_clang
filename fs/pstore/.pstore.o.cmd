cmd_fs/pstore/pstore.o := aarch64-linux-gnu-ld -EL    -r -o fs/pstore/pstore.o fs/pstore/inode.o fs/pstore/platform.o fs/pstore/pmsg.o ; scripts/mod/modpost fs/pstore/pstore.o
