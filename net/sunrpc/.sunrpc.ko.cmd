cmd_net/sunrpc/sunrpc.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/sunrpc/sunrpc.ko net/sunrpc/sunrpc.o net/sunrpc/sunrpc.mod.o ;  true
