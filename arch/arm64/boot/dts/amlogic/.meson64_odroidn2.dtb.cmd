cmd_arch/arm64/boot/dts/amlogic/meson64_odroidn2.dtb := mkdir -p arch/arm64/boot/dts/amlogic/ ; clang -E -Wp,-MD,arch/arm64/boot/dts/amlogic/.meson64_odroidn2.dtb.d.pre.tmp -nostdinc -I./arch/arm64/boot/dts -I./arch/arm64/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/amlogic/.meson64_odroidn2.dtb.dts.tmp arch/arm64/boot/dts/amlogic/meson64_odroidn2.dts ; ./scripts/dtc/dtc -@ -O dtb -o arch/arm64/boot/dts/amlogic/meson64_odroidn2.dtb -b 0 -i arch/arm64/boot/dts/amlogic/ -Wno-unit_address_vs_reg -Wno-simple_bus_reg -Wno-unit_address_format -Wno-pci_bridge -Wno-pci_device_bus_num -Wno-pci_device_reg -d arch/arm64/boot/dts/amlogic/.meson64_odroidn2.dtb.d.dtc.tmp arch/arm64/boot/dts/amlogic/.meson64_odroidn2.dtb.dts.tmp ; cat arch/arm64/boot/dts/amlogic/.meson64_odroidn2.dtb.d.pre.tmp arch/arm64/boot/dts/amlogic/.meson64_odroidn2.dtb.d.dtc.tmp > arch/arm64/boot/dts/amlogic/.meson64_odroidn2.dtb.d

source_arch/arm64/boot/dts/amlogic/meson64_odroidn2.dtb := arch/arm64/boot/dts/amlogic/meson64_odroidn2.dts

deps_arch/arm64/boot/dts/amlogic/meson64_odroidn2.dtb := \
  arch/arm64/boot/dts/amlogic/mesong12b_a.dtsi \
  arch/arm64/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  arch/arm64/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm64/boot/dts/include/dt-bindings/clock/amlogic,g12a-clkc.h \
  arch/arm64/boot/dts/include/dt-bindings/clock/amlogic,g12a-audio-clk.h \
  arch/arm64/boot/dts/include/dt-bindings/iio/adc/amlogic-saradc.h \
  arch/arm64/boot/dts/include/dt-bindings/gpio/meson-g12a-gpio.h \
  arch/arm64/boot/dts/include/dt-bindings/pwm/pwm.h \
  arch/arm64/boot/dts/include/dt-bindings/pwm/meson.h \
  arch/arm64/boot/dts/include/dt-bindings/gpio/gpio.h \
    $(wildcard include/config/amlogic/modify.h) \
  arch/arm64/boot/dts/include/dt-bindings/input/input.h \
  arch/arm64/boot/dts/include/dt-bindings/input/linux-event-codes.h \
  arch/arm64/boot/dts/include/dt-bindings/input/meson_rc.h \
  arch/arm64/boot/dts/include/dt-bindings/phy/phy-amlogic-pcie.h \
  arch/arm64/boot/dts/amlogic/mesong12a-bifrost.dtsi \
  arch/arm64/boot/dts/amlogic/g12b-sched-energy-a.dtsi \
  arch/arm64/boot/dts/amlogic/meson64_odroidn2.dtsi \
  arch/arm64/boot/dts/amlogic/mesong12_odroid_common.dtsi \

arch/arm64/boot/dts/amlogic/meson64_odroidn2.dtb: $(deps_arch/arm64/boot/dts/amlogic/meson64_odroidn2.dtb)

$(deps_arch/arm64/boot/dts/amlogic/meson64_odroidn2.dtb):
