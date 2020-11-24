cmd_fs/fat/vfat.o := aarch64-linux-gnu-ld -EL    -r -o fs/fat/vfat.o fs/fat/namei_vfat.o ; scripts/mod/modpost fs/fat/vfat.o
