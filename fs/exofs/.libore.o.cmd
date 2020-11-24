cmd_fs/exofs/libore.o := aarch64-linux-gnu-ld -EL    -r -o fs/exofs/libore.o fs/exofs/ore.o fs/exofs/ore_raid.o ; scripts/mod/modpost fs/exofs/libore.o
