cmd_drivers/firmware/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/firmware/built-in.o drivers/firmware/psci.o drivers/firmware/arm_scpi.o drivers/firmware/scpi_pm_domain.o drivers/firmware/dmi_scan.o drivers/firmware/dmi-id.o drivers/firmware/broadcom/built-in.o drivers/firmware/meson/built-in.o drivers/firmware/efi/built-in.o ; scripts/mod/modpost drivers/firmware/built-in.o
