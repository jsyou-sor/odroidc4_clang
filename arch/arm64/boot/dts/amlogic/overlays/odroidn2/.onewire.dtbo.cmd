cmd_arch/arm64/boot/dts/amlogic/overlays/odroidn2/onewire.dtbo := mkdir -p arch/arm64/boot/dts/amlogic/overlays/odroidn2/ ; clang -E -Wp,-MD,arch/arm64/boot/dts/amlogic/overlays/odroidn2/.onewire.dtbo.d.pre.tmp -nostdinc -I./arch/arm64/boot/dts -I./arch/arm64/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/amlogic/overlays/odroidn2/.onewire.dtbo.dts.tmp arch/arm64/boot/dts/amlogic/overlays/odroidn2/onewire.dts ; ./scripts/dtc/dtc -@ -H epapr -O dtb -o arch/arm64/boot/dts/amlogic/overlays/odroidn2/onewire.dtbo -b 0 -@ -i arch/arm64/boot/dts/amlogic/overlays/odroidn2/ -Wno-unit_address_vs_reg -Wno-simple_bus_reg -Wno-unit_address_format -Wno-pci_bridge -Wno-pci_device_bus_num -Wno-pci_device_reg -d arch/arm64/boot/dts/amlogic/overlays/odroidn2/.onewire.dtbo.d.dtc.tmp arch/arm64/boot/dts/amlogic/overlays/odroidn2/.onewire.dtbo.dts.tmp ; cat arch/arm64/boot/dts/amlogic/overlays/odroidn2/.onewire.dtbo.d.pre.tmp arch/arm64/boot/dts/amlogic/overlays/odroidn2/.onewire.dtbo.d.dtc.tmp > arch/arm64/boot/dts/amlogic/overlays/odroidn2/.onewire.dtbo.d

source_arch/arm64/boot/dts/amlogic/overlays/odroidn2/onewire.dtbo := arch/arm64/boot/dts/amlogic/overlays/odroidn2/onewire.dts

deps_arch/arm64/boot/dts/amlogic/overlays/odroidn2/onewire.dtbo := \
  arch/arm64/boot/dts/include/dt-bindings/gpio/meson-g12a-gpio.h \
  arch/arm64/boot/dts/include/dt-bindings/gpio/gpio.h \
    $(wildcard include/config/amlogic/modify.h) \

arch/arm64/boot/dts/amlogic/overlays/odroidn2/onewire.dtbo: $(deps_arch/arm64/boot/dts/amlogic/overlays/odroidn2/onewire.dtbo)

$(deps_arch/arm64/boot/dts/amlogic/overlays/odroidn2/onewire.dtbo):
