cmd_drivers/amlogic/media/enhancement/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/amlogic/media/enhancement/built-in.o drivers/amlogic/media/enhancement/amvecm/built-in.o drivers/amlogic/media/enhancement/amdolby_vision/built-in.o ; scripts/mod/modpost drivers/amlogic/media/enhancement/built-in.o