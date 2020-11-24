cmd_fs/pstore/ramoops.o := aarch64-linux-gnu-ld -EL    -r -o fs/pstore/ramoops.o fs/pstore/ram.o fs/pstore/ram_core.o ; scripts/mod/modpost fs/pstore/ramoops.o
