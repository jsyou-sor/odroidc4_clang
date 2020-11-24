cmd_arch/arm64/lib/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o arch/arm64/lib/built-in.o arch/arm64/lib/lib-ksyms.o ; scripts/mod/modpost arch/arm64/lib/built-in.o
