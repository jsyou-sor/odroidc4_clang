cmd_drivers/amlogic/audioinfo/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/amlogic/audioinfo/built-in.o drivers/amlogic/audioinfo/audio_data.o ; scripts/mod/modpost drivers/amlogic/audioinfo/built-in.o