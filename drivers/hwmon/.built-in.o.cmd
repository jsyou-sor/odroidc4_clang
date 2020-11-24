cmd_drivers/hwmon/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/hwmon/built-in.o drivers/hwmon/hwmon.o drivers/hwmon/pwm-fan.o ; scripts/mod/modpost drivers/hwmon/built-in.o
