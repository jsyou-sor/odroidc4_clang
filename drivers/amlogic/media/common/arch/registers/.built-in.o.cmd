cmd_drivers/amlogic/media/common/arch/registers/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/amlogic/media/common/arch/registers/built-in.o drivers/amlogic/media/common/arch/registers/register_ops.o drivers/amlogic/media/common/arch/registers/register_ops_m8.o drivers/amlogic/media/common/arch/registers/register_map.o ; scripts/mod/modpost drivers/amlogic/media/common/arch/registers/built-in.o