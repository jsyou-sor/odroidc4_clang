cmd_drivers/dma-buf/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/dma-buf/built-in.o drivers/dma-buf/dma-buf.o drivers/dma-buf/fence.o drivers/dma-buf/reservation.o drivers/dma-buf/seqno-fence.o drivers/dma-buf/fence-array.o drivers/dma-buf/sync_file.o drivers/dma-buf/sw_sync.o drivers/dma-buf/sync_debug.o ; scripts/mod/modpost drivers/dma-buf/built-in.o
