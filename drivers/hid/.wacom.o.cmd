cmd_drivers/hid/wacom.o := aarch64-linux-gnu-ld -EL    -r -o drivers/hid/wacom.o drivers/hid/wacom_wac.o drivers/hid/wacom_sys.o ; scripts/mod/modpost drivers/hid/wacom.o
