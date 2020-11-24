cmd_fs/tracefs/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o fs/tracefs/built-in.o fs/tracefs/tracefs.o ; scripts/mod/modpost fs/tracefs/built-in.o
