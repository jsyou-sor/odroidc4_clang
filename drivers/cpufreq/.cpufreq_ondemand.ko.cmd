cmd_drivers/cpufreq/cpufreq_ondemand.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/cpufreq/cpufreq_ondemand.ko drivers/cpufreq/cpufreq_ondemand.o drivers/cpufreq/cpufreq_ondemand.mod.o ;  true