cmd_drivers/amlogic/media/vin/tvin/hdmirx_ext/hw_sii9135/SiITTAudio.o := clang -Wp,-MD,drivers/amlogic/media/vin/tvin/hdmirx_ext/hw_sii9135/.SiITTAudio.o.d  -nostdinc -isystem /home/jsyou/llvm/build/lib/clang/10.0.0/include -I./arch/arm64/include -I./arch/arm64/include/generated/uapi -I./arch/arm64/include/generated  -I./include -I./arch/arm64/include/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Qunused-arguments -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -Werror-implicit-function-declaration -Wno-format-security -Werror -std=gnu89 -fno-PIE --target=aarch64-linux-gnu --prefix=/opt/toolchains/gcc-linaro-6.3.1-2017.02-x86_64_aarch64-linux-gnu/bin//aarch64-linux-gnu- --gcc-toolchain=/opt/toolchains/gcc-linaro-6.3.1-2017.02-x86_64_aarch64-linux-gnu -no-integrated-as -Werror=unknown-warning-option -fno-PIE -mno-implicit-float -DCONFIG_AS_LSE=1 -fno-asynchronous-unwind-tables -fno-pic -Wno-asm-operand-widths -fno-delete-null-pointer-checks -Wno-int-in-bool-context -Wno-address-of-packed-member -O2 -DCC_HAVE_ASM_GOTO -fno-stack-protector -Wno-format-invalid-specifier -Wno-gnu -Wno-tautological-compare -mno-global-merge -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -pg -Wdeclaration-after-statement -Wno-pointer-sign -Wno-array-bounds -fno-strict-overflow -fno-merge-all-constants -fno-stack-check -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -Werror=incompatible-pointer-types -Wno-initializer-overrides -Wno-unused-value -Wno-format -Wno-sign-compare -Wno-format-zero-length -Wno-uninitialized    -DKBUILD_BASENAME='"SiITTAudio"'  -DKBUILD_MODNAME='"hw_sii9135"' -c -o drivers/amlogic/media/vin/tvin/hdmirx_ext/hw_sii9135/.tmp_SiITTAudio.o drivers/amlogic/media/vin/tvin/hdmirx_ext/hw_sii9135/SiITTAudio.c

source_drivers/amlogic/media/vin/tvin/hdmirx_ext/hw_sii9135/SiITTAudio.o := drivers/amlogic/media/vin/tvin/hdmirx_ext/hw_sii9135/SiITTAudio.c

deps_drivers/amlogic/media/vin/tvin/hdmirx_ext/hw_sii9135/SiITTAudio.o := \
  drivers/amlogic/media/vin/tvin/hdmirx_ext/hw_sii9135/SiIGlob.h \
  drivers/amlogic/media/vin/tvin/hdmirx_ext/hw_sii9135/SiITypeDefs.h \
  drivers/amlogic/media/vin/tvin/hdmirx_ext/hw_sii9135/SiICmplDefs.h \
  drivers/amlogic/media/vin/tvin/hdmirx_ext/hw_sii9135/SiIVidRes.h \
  drivers/amlogic/media/vin/tvin/hdmirx_ext/hw_sii9135/SiIRXAPIDefs.h \
  drivers/amlogic/media/vin/tvin/hdmirx_ext/hw_sii9135/SiITTAudio.h \
  drivers/amlogic/media/vin/tvin/hdmirx_ext/hw_sii9135/SiITTVideo.h \
  drivers/amlogic/media/vin/tvin/hdmirx_ext/hw_sii9135/SiIAudio.h \
  drivers/amlogic/media/vin/tvin/hdmirx_ext/hw_sii9135/SiITrace.h \
  drivers/amlogic/media/vin/tvin/hdmirx_ext/hw_sii9135/SiIHAL.h \

drivers/amlogic/media/vin/tvin/hdmirx_ext/hw_sii9135/SiITTAudio.o: $(deps_drivers/amlogic/media/vin/tvin/hdmirx_ext/hw_sii9135/SiITTAudio.o)

$(deps_drivers/amlogic/media/vin/tvin/hdmirx_ext/hw_sii9135/SiITTAudio.o):
