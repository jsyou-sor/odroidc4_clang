cmd_fs/logfs/logfs.o := aarch64-linux-gnu-ld -EL    -r -o fs/logfs/logfs.o fs/logfs/compr.o fs/logfs/dir.o fs/logfs/file.o fs/logfs/gc.o fs/logfs/inode.o fs/logfs/journal.o fs/logfs/readwrite.o fs/logfs/segment.o fs/logfs/super.o fs/logfs/dev_bdev.o fs/logfs/dev_mtd.o ; scripts/mod/modpost fs/logfs/logfs.o
