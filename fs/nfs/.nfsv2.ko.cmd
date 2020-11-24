cmd_fs/nfs/nfsv2.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o fs/nfs/nfsv2.ko fs/nfs/nfsv2.o fs/nfs/nfsv2.mod.o ;  true
