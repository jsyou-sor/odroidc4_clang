cmd_drivers/amlogic/clocksource/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/amlogic/clocksource/built-in.o drivers/amlogic/clocksource/meson_bc_timer.o ; scripts/mod/modpost drivers/amlogic/clocksource/built-in.o