cmd_drivers/block/zram/zram.o := aarch64-linux-gnu-ld -EL    -r -o drivers/block/zram/zram.o drivers/block/zram/zcomp.o drivers/block/zram/zram_drv.o ; scripts/mod/modpost drivers/block/zram/zram.o
