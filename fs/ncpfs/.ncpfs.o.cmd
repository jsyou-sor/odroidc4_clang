cmd_fs/ncpfs/ncpfs.o := aarch64-linux-gnu-ld -EL    -r -o fs/ncpfs/ncpfs.o fs/ncpfs/dir.o fs/ncpfs/file.o fs/ncpfs/inode.o fs/ncpfs/ioctl.o fs/ncpfs/mmap.o fs/ncpfs/ncplib_kernel.o fs/ncpfs/sock.o fs/ncpfs/ncpsign_kernel.o fs/ncpfs/getopt.o fs/ncpfs/symlink.o ; scripts/mod/modpost fs/ncpfs/ncpfs.o
