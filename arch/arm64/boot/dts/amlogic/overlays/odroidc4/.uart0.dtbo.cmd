cmd_arch/arm64/boot/dts/amlogic/overlays/odroidc4/uart0.dtbo := mkdir -p arch/arm64/boot/dts/amlogic/overlays/odroidc4/ ; clang -E -Wp,-MD,arch/arm64/boot/dts/amlogic/overlays/odroidc4/.uart0.dtbo.d.pre.tmp -nostdinc -I./arch/arm64/boot/dts -I./arch/arm64/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/amlogic/overlays/odroidc4/.uart0.dtbo.dts.tmp arch/arm64/boot/dts/amlogic/overlays/odroidc4/uart0.dts ; ./scripts/dtc/dtc -@ -H epapr -O dtb -o arch/arm64/boot/dts/amlogic/overlays/odroidc4/uart0.dtbo -b 0 -@ -i arch/arm64/boot/dts/amlogic/overlays/odroidc4/ -Wno-unit_address_vs_reg -Wno-simple_bus_reg -Wno-unit_address_format -Wno-pci_bridge -Wno-pci_device_bus_num -Wno-pci_device_reg -d arch/arm64/boot/dts/amlogic/overlays/odroidc4/.uart0.dtbo.d.dtc.tmp arch/arm64/boot/dts/amlogic/overlays/odroidc4/.uart0.dtbo.dts.tmp ; cat arch/arm64/boot/dts/amlogic/overlays/odroidc4/.uart0.dtbo.d.pre.tmp arch/arm64/boot/dts/amlogic/overlays/odroidc4/.uart0.dtbo.d.dtc.tmp > arch/arm64/boot/dts/amlogic/overlays/odroidc4/.uart0.dtbo.d

source_arch/arm64/boot/dts/amlogic/overlays/odroidc4/uart0.dtbo := arch/arm64/boot/dts/amlogic/overlays/odroidc4/uart0.dts

deps_arch/arm64/boot/dts/amlogic/overlays/odroidc4/uart0.dtbo := \

arch/arm64/boot/dts/amlogic/overlays/odroidc4/uart0.dtbo: $(deps_arch/arm64/boot/dts/amlogic/overlays/odroidc4/uart0.dtbo)

$(deps_arch/arm64/boot/dts/amlogic/overlays/odroidc4/uart0.dtbo):
