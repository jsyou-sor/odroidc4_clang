cmd_net/wireless/lib80211.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o net/wireless/lib80211.ko net/wireless/lib80211.o net/wireless/lib80211.mod.o ;  true
