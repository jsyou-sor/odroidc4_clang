cmd_drivers/amlogic/memory_ext/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/amlogic/memory_ext/built-in.o drivers/amlogic/memory_ext/page_trace.o drivers/amlogic/memory_ext/aml_cma.o ; scripts/mod/modpost drivers/amlogic/memory_ext/built-in.o