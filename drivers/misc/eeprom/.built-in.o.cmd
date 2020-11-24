cmd_drivers/misc/eeprom/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/misc/eeprom/built-in.o drivers/misc/eeprom/at24.o ; scripts/mod/modpost drivers/misc/eeprom/built-in.o
