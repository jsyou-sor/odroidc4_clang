cmd_fs/nfs/nfsv2.o := aarch64-linux-gnu-ld -EL    -r -o fs/nfs/nfsv2.o fs/nfs/nfs2super.o fs/nfs/proc.o fs/nfs/nfs2xdr.o ; scripts/mod/modpost fs/nfs/nfsv2.o
