cmd_drivers/iio/buffer/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/iio/buffer/built-in.o drivers/iio/buffer/kfifo_buf.o ; scripts/mod/modpost drivers/iio/buffer/built-in.o
