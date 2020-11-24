cmd_net/mac80211/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o net/mac80211/built-in.o net/mac80211/mac80211.o ; scripts/mod/modpost net/mac80211/built-in.o
