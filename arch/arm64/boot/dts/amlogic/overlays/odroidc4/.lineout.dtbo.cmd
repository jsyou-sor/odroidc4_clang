cmd_arch/arm64/boot/dts/amlogic/overlays/odroidc4/lineout.dtbo := mkdir -p arch/arm64/boot/dts/amlogic/overlays/odroidc4/ ; clang -E -Wp,-MD,arch/arm64/boot/dts/amlogic/overlays/odroidc4/.lineout.dtbo.d.pre.tmp -nostdinc -I./arch/arm64/boot/dts -I./arch/arm64/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/amlogic/overlays/odroidc4/.lineout.dtbo.dts.tmp arch/arm64/boot/dts/amlogic/overlays/odroidc4/lineout.dts ; ./scripts/dtc/dtc -@ -H epapr -O dtb -o arch/arm64/boot/dts/amlogic/overlays/odroidc4/lineout.dtbo -b 0 -@ -i arch/arm64/boot/dts/amlogic/overlays/odroidc4/ -Wno-unit_address_vs_reg -Wno-simple_bus_reg -Wno-unit_address_format -Wno-pci_bridge -Wno-pci_device_bus_num -Wno-pci_device_reg -d arch/arm64/boot/dts/amlogic/overlays/odroidc4/.lineout.dtbo.d.dtc.tmp arch/arm64/boot/dts/amlogic/overlays/odroidc4/.lineout.dtbo.dts.tmp ; cat arch/arm64/boot/dts/amlogic/overlays/odroidc4/.lineout.dtbo.d.pre.tmp arch/arm64/boot/dts/amlogic/overlays/odroidc4/.lineout.dtbo.d.dtc.tmp > arch/arm64/boot/dts/amlogic/overlays/odroidc4/.lineout.dtbo.d

source_arch/arm64/boot/dts/amlogic/overlays/odroidc4/lineout.dtbo := arch/arm64/boot/dts/amlogic/overlays/odroidc4/lineout.dts

deps_arch/arm64/boot/dts/amlogic/overlays/odroidc4/lineout.dtbo := \

arch/arm64/boot/dts/amlogic/overlays/odroidc4/lineout.dtbo: $(deps_arch/arm64/boot/dts/amlogic/overlays/odroidc4/lineout.dtbo)

$(deps_arch/arm64/boot/dts/amlogic/overlays/odroidc4/lineout.dtbo):
