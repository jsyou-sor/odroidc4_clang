cmd_fs/ecryptfs/ecryptfs.o := aarch64-linux-gnu-ld -EL    -r -o fs/ecryptfs/ecryptfs.o fs/ecryptfs/dentry.o fs/ecryptfs/file.o fs/ecryptfs/inode.o fs/ecryptfs/main.o fs/ecryptfs/super.o fs/ecryptfs/mmap.o fs/ecryptfs/read_write.o fs/ecryptfs/crypto.o fs/ecryptfs/keystore.o fs/ecryptfs/kthread.o fs/ecryptfs/debug.o fs/ecryptfs/messaging.o fs/ecryptfs/miscdev.o ; scripts/mod/modpost fs/ecryptfs/ecryptfs.o
