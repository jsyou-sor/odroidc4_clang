cmd_drivers/mmc/card/mmc_block.o := aarch64-linux-gnu-ld -EL    -r -o drivers/mmc/card/mmc_block.o drivers/mmc/card/block.o drivers/mmc/card/queue.o ; scripts/mod/modpost drivers/mmc/card/mmc_block.o
