cmd_sound/synth/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o sound/synth/built-in.o sound/synth/emux/built-in.o ; scripts/mod/modpost sound/synth/built-in.o
