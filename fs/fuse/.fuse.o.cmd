cmd_fs/fuse/fuse.o := aarch64-linux-gnu-ld -EL    -r -o fs/fuse/fuse.o fs/fuse/dev.o fs/fuse/dir.o fs/fuse/file.o fs/fuse/inode.o fs/fuse/control.o fs/fuse/xattr.o fs/fuse/acl.o ; scripts/mod/modpost fs/fuse/fuse.o