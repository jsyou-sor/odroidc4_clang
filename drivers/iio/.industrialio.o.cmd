cmd_drivers/iio/industrialio.o := aarch64-linux-gnu-ld -EL    -r -o drivers/iio/industrialio.o drivers/iio/industrialio-core.o drivers/iio/industrialio-event.o drivers/iio/inkern.o drivers/iio/industrialio-buffer.o ; scripts/mod/modpost drivers/iio/industrialio.o