cmd_net/sched/act_ipt.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/sched/act_ipt.ko net/sched/act_ipt.o net/sched/act_ipt.mod.o ;  true