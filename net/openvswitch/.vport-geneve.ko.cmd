cmd_net/openvswitch/vport-geneve.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/openvswitch/vport-geneve.ko net/openvswitch/vport-geneve.o net/openvswitch/vport-geneve.mod.o ;  true