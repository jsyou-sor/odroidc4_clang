cmd_fs/ncpfs/ncpfs.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o fs/ncpfs/ncpfs.ko fs/ncpfs/ncpfs.o fs/ncpfs/ncpfs.mod.o ;  true
