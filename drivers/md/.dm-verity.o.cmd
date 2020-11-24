cmd_drivers/md/dm-verity.o := aarch64-linux-gnu-ld -EL    -r -o drivers/md/dm-verity.o drivers/md/dm-verity-fec.o drivers/md/dm-verity-target.o ; scripts/mod/modpost drivers/md/dm-verity.o
