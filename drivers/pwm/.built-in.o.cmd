cmd_drivers/pwm/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/pwm/built-in.o drivers/pwm/core.o drivers/pwm/sysfs.o drivers/pwm/pwm-gpio.o ; scripts/mod/modpost drivers/pwm/built-in.o
