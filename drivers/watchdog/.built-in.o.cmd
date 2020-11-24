cmd_drivers/watchdog/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/watchdog/built-in.o drivers/watchdog/watchdog.o ; scripts/mod/modpost drivers/watchdog/built-in.o
