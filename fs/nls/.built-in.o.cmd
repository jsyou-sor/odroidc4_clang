cmd_fs/nls/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o fs/nls/built-in.o fs/nls/nls_base.o fs/nls/nls_cp437.o fs/nls/nls_iso8859-1.o ; scripts/mod/modpost fs/nls/built-in.o
