cmd_drivers/net/wireless/esp8089/spi_sif_esp.o := clang -Wp,-MD,drivers/net/wireless/esp8089/.spi_sif_esp.o.d  -nostdinc -isystem /home/jsyou/llvm/build/lib/clang/10.0.0/include -I./arch/arm64/include -I./arch/arm64/include/generated/uapi -I./arch/arm64/include/generated  -I./include -I./arch/arm64/include/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Qunused-arguments -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -Werror-implicit-function-declaration -Wno-format-security -Werror -std=gnu89 -fno-PIE --target=aarch64-linux-gnu --prefix=/opt/toolchains/gcc-linaro-6.3.1-2017.02-x86_64_aarch64-linux-gnu/bin//aarch64-linux-gnu- --gcc-toolchain=/opt/toolchains/gcc-linaro-6.3.1-2017.02-x86_64_aarch64-linux-gnu -no-integrated-as -Werror=unknown-warning-option -fno-PIE -mno-implicit-float -DCONFIG_AS_LSE=1 -fno-asynchronous-unwind-tables -fno-pic -Wno-asm-operand-widths -fno-delete-null-pointer-checks -Wno-int-in-bool-context -Wno-address-of-packed-member -O2 -DCC_HAVE_ASM_GOTO -fno-stack-protector -Wno-format-invalid-specifier -Wno-gnu -Wno-tautological-compare -mno-global-merge -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -pg -Wdeclaration-after-statement -Wno-pointer-sign -Wno-array-bounds -fno-strict-overflow -fno-merge-all-constants -fno-stack-check -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -Werror=incompatible-pointer-types -Wno-initializer-overrides -Wno-unused-value -Wno-format -Wno-sign-compare -Wno-format-zero-length -Wno-uninitialized -DDEBUG -DSIP_DEBUG -DFAST_TX_STATUS -DKERNEL_IV_WAR -DRX_SENDUP_SYNC -DDEBUG_FS -DSIF_DSR_WAR -DHAS_INIT_DATA -DHAS_FW -DESP_USE_SDIO  -DMODULE -mcmodel=large  -DKBUILD_BASENAME='"spi_sif_esp"'  -DKBUILD_MODNAME='"esp8089"' -c -o drivers/net/wireless/esp8089/.tmp_spi_sif_esp.o drivers/net/wireless/esp8089/spi_sif_esp.c

source_drivers/net/wireless/esp8089/spi_sif_esp.o := drivers/net/wireless/esp8089/spi_sif_esp.c

deps_drivers/net/wireless/esp8089/spi_sif_esp.o := \

drivers/net/wireless/esp8089/spi_sif_esp.o: $(deps_drivers/net/wireless/esp8089/spi_sif_esp.o)

$(deps_drivers/net/wireless/esp8089/spi_sif_esp.o):
