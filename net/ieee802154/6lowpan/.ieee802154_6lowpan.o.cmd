cmd_net/ieee802154/6lowpan/ieee802154_6lowpan.o := aarch64-linux-gnu-ld -EL    -r -o net/ieee802154/6lowpan/ieee802154_6lowpan.o net/ieee802154/6lowpan/core.o net/ieee802154/6lowpan/rx.o net/ieee802154/6lowpan/reassembly.o net/ieee802154/6lowpan/tx.o ; scripts/mod/modpost net/ieee802154/6lowpan/ieee802154_6lowpan.o
