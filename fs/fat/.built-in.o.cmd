cmd_fs/fat/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o fs/fat/built-in.o fs/fat/fat.o fs/fat/vfat.o ; scripts/mod/modpost fs/fat/built-in.o
