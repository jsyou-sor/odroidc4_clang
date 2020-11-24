cmd_drivers/power/supply/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/power/supply/built-in.o drivers/power/supply/power_supply.o ; scripts/mod/modpost drivers/power/supply/built-in.o
