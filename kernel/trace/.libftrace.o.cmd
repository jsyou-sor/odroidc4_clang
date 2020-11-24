cmd_kernel/trace/libftrace.o := aarch64-linux-gnu-ld -EL    -r -o kernel/trace/libftrace.o kernel/trace/ftrace.o ; scripts/mod/modpost kernel/trace/libftrace.o
