cmd_fs/nilfs2/nilfs2.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o fs/nilfs2/nilfs2.ko fs/nilfs2/nilfs2.o fs/nilfs2/nilfs2.mod.o ;  true
