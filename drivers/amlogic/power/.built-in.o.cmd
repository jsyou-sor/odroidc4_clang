cmd_drivers/amlogic/power/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/amlogic/power/built-in.o drivers/amlogic/power/power_ctrl.o ; scripts/mod/modpost drivers/amlogic/power/built-in.o
