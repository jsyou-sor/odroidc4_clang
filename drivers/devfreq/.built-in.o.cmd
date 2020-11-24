cmd_drivers/devfreq/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/devfreq/built-in.o drivers/devfreq/devfreq.o ; scripts/mod/modpost drivers/devfreq/built-in.o
