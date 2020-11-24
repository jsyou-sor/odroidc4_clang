cmd_drivers/amlogic/media_modules/stream_input/parser/demux/sw_demux/dvbcsa2/dvbcsa_key.o := clang -Wp,-MD,drivers/amlogic/media_modules/stream_input/parser/demux/sw_demux/dvbcsa2/.dvbcsa_key.o.d  -nostdinc -isystem /home/jsyou/llvm/build/lib/clang/10.0.0/include -I./arch/arm64/include -I./arch/arm64/include/generated/uapi -I./arch/arm64/include/generated  -I./include -I./arch/arm64/include/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Qunused-arguments -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -Werror-implicit-function-declaration -Wno-format-security -Werror -std=gnu89 -fno-PIE --target=aarch64-linux-gnu --prefix=/opt/toolchains/gcc-linaro-6.3.1-2017.02-x86_64_aarch64-linux-gnu/bin//aarch64-linux-gnu- --gcc-toolchain=/opt/toolchains/gcc-linaro-6.3.1-2017.02-x86_64_aarch64-linux-gnu -no-integrated-as -Werror=unknown-warning-option -fno-PIE -mno-implicit-float -DCONFIG_AS_LSE=1 -fno-asynchronous-unwind-tables -fno-pic -Wno-asm-operand-widths -fno-delete-null-pointer-checks -Wno-int-in-bool-context -Wno-address-of-packed-member -O2 -DCC_HAVE_ASM_GOTO -fno-stack-protector -Wno-format-invalid-specifier -Wno-gnu -Wno-tautological-compare -mno-global-merge -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -pg -Wdeclaration-after-statement -Wno-pointer-sign -Wno-array-bounds -fno-strict-overflow -fno-merge-all-constants -fno-stack-check -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -Werror=incompatible-pointer-types -Wno-initializer-overrides -Wno-unused-value -Wno-format -Wno-sign-compare -Wno-format-zero-length -Wno-uninitialized -I./drivers/media/dvb-core -I./drivers/gpio -I./include  -DMODULE -mcmodel=large  -DKBUILD_BASENAME='"dvbcsa_key"'  -DKBUILD_MODNAME='"aml_swdmx"' -c -o drivers/amlogic/media_modules/stream_input/parser/demux/sw_demux/dvbcsa2/.tmp_dvbcsa_key.o drivers/amlogic/media_modules/stream_input/parser/demux/sw_demux/dvbcsa2/dvbcsa_key.c

source_drivers/amlogic/media_modules/stream_input/parser/demux/sw_demux/dvbcsa2/dvbcsa_key.o := drivers/amlogic/media_modules/stream_input/parser/demux/sw_demux/dvbcsa2/dvbcsa_key.c

deps_drivers/amlogic/media_modules/stream_input/parser/demux/sw_demux/dvbcsa2/dvbcsa_key.o := \
  drivers/amlogic/media_modules/stream_input/parser/demux/sw_demux/dvbcsa2/dvbcsa/dvbcsa.h \
  drivers/amlogic/media_modules/stream_input/parser/demux/sw_demux/dvbcsa2/dvbcsa_pv.h \
  drivers/amlogic/media_modules/stream_input/parser/demux/sw_demux/dvbcsa2/config.h \
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/kasan.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
    $(wildcard include/config/gcov/kernel.h) \
    $(wildcard include/config/stack/validation.h) \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  include/linux/compiler-clang.h \
  include/uapi/linux/types.h \
  arch/arm64/include/generated/asm/types.h \
  include/uapi/asm-generic/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/arm64/include/uapi/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
    $(wildcard include/config/64bit.h) \
  include/uapi/asm-generic/bitsperlong.h \
  include/uapi/linux/posix_types.h \
  arch/arm64/include/uapi/asm/posix_types.h \
  include/uapi/asm-generic/posix_types.h \
  include/linux/kasan-checks.h \
  include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
  include/linux/types.h \
    $(wildcard include/config/have/uid16.h) \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
  /home/jsyou/llvm/build/lib/clang/10.0.0/include/stdarg.h \
  include/uapi/linux/string.h \
  arch/arm64/include/asm/string.h \

drivers/amlogic/media_modules/stream_input/parser/demux/sw_demux/dvbcsa2/dvbcsa_key.o: $(deps_drivers/amlogic/media_modules/stream_input/parser/demux/sw_demux/dvbcsa2/dvbcsa_key.o)

$(deps_drivers/amlogic/media_modules/stream_input/parser/demux/sw_demux/dvbcsa2/dvbcsa_key.o):
