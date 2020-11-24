cmd_drivers/block/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/block/built-in.o drivers/block/loop.o drivers/block/virtio_blk.o ; scripts/mod/modpost drivers/block/built-in.o
