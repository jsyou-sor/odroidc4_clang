cmd_drivers/amlogic/thermal/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/amlogic/thermal/built-in.o drivers/amlogic/thermal/aml_thermal_hw.o drivers/amlogic/thermal/meson_tsensor.o drivers/amlogic/thermal/meson_cooldev.o drivers/amlogic/thermal/cpucore_cooling.o drivers/amlogic/thermal/gpu_cooling.o drivers/amlogic/thermal/gpucore_cooling.o ; scripts/mod/modpost drivers/amlogic/thermal/built-in.o
