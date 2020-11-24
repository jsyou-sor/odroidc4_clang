cmd_fs/udf/udf.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o fs/udf/udf.ko fs/udf/udf.o fs/udf/udf.mod.o ;  true
