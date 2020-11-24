cmd_fs/nfs/nfsv4.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o fs/nfs/nfsv4.ko fs/nfs/nfsv4.o fs/nfs/nfsv4.mod.o ;  true
