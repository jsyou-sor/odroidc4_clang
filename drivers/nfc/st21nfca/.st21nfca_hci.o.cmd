cmd_drivers/nfc/st21nfca/st21nfca_hci.o := aarch64-linux-gnu-ld -EL    -r -o drivers/nfc/st21nfca/st21nfca_hci.o drivers/nfc/st21nfca/core.o drivers/nfc/st21nfca/dep.o drivers/nfc/st21nfca/se.o drivers/nfc/st21nfca/vendor_cmds.o ; scripts/mod/modpost drivers/nfc/st21nfca/st21nfca_hci.o