cmd_fs/autofs4/autofs4.o := aarch64-linux-gnu-ld -EL    -r -o fs/autofs4/autofs4.o fs/autofs4/init.o fs/autofs4/inode.o fs/autofs4/root.o fs/autofs4/symlink.o fs/autofs4/waitq.o fs/autofs4/expire.o fs/autofs4/dev-ioctl.o ; scripts/mod/modpost fs/autofs4/autofs4.o
