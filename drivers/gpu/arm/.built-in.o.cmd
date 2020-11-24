cmd_drivers/gpu/arm/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/gpu/arm/built-in.o drivers/gpu/arm/midgard/built-in.o ; scripts/mod/modpost drivers/gpu/arm/built-in.o
