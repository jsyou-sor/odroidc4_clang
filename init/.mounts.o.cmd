cmd_init/mounts.o := aarch64-linux-gnu-ld -EL    -r -o init/mounts.o init/do_mounts.o init/do_mounts_initrd.o ; scripts/mod/modpost init/mounts.o
