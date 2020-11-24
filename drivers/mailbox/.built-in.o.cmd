cmd_drivers/mailbox/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/mailbox/built-in.o drivers/mailbox/mailbox.o ; scripts/mod/modpost drivers/mailbox/built-in.o
