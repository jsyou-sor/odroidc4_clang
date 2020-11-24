cmd_drivers/amlogic/debug/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/amlogic/debug/built-in.o drivers/amlogic/debug/debug_lockup.o ; scripts/mod/modpost drivers/amlogic/debug/built-in.o
