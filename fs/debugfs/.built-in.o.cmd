cmd_fs/debugfs/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o fs/debugfs/built-in.o fs/debugfs/debugfs.o ; scripts/mod/modpost fs/debugfs/built-in.o
