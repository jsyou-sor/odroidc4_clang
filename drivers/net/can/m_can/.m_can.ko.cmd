cmd_drivers/net/can/m_can/m_can.ko := aarch64-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/net/can/m_can/m_can.ko drivers/net/can/m_can/m_can.o drivers/net/can/m_can/m_can.mod.o ;  true
