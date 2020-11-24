cmd_fs/ceph/ceph.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o fs/ceph/ceph.ko fs/ceph/ceph.o fs/ceph/ceph.mod.o ;  true
