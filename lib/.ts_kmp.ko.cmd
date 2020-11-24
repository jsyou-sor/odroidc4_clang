cmd_lib/ts_kmp.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o lib/ts_kmp.ko lib/ts_kmp.o lib/ts_kmp.mod.o ;  true
