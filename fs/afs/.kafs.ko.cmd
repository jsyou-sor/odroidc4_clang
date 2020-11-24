cmd_fs/afs/kafs.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o fs/afs/kafs.ko fs/afs/kafs.o fs/afs/kafs.mod.o ;  true
