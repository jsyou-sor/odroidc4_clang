cmd_kernel/bpf/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o kernel/bpf/built-in.o kernel/bpf/core.o kernel/bpf/syscall.o kernel/bpf/verifier.o kernel/bpf/inode.o kernel/bpf/helpers.o kernel/bpf/hashtab.o kernel/bpf/arraymap.o kernel/bpf/percpu_freelist.o kernel/bpf/stackmap.o kernel/bpf/cgroup.o ; scripts/mod/modpost kernel/bpf/built-in.o
