cmd_drivers/extcon/extcon-core.o := aarch64-linux-gnu-ld -EL    -r -o drivers/extcon/extcon-core.o drivers/extcon/extcon.o drivers/extcon/devres.o ; scripts/mod/modpost drivers/extcon/extcon-core.o
