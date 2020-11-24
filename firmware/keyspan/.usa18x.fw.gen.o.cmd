cmd_firmware/keyspan/usa18x.fw.gen.o := clang -Wp,-MD,firmware/keyspan/.usa18x.fw.gen.o.d  -nostdinc -isystem /home/jsyou/llvm/build/lib/clang/10.0.0/include -I./arch/arm64/include -I./arch/arm64/include/generated/uapi -I./arch/arm64/include/generated  -I./include -I./arch/arm64/include/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Qunused-arguments -D__ASSEMBLY__ --target=aarch64-linux-gnu --prefix=/opt/toolchains/gcc-linaro-6.3.1-2017.02-x86_64_aarch64-linux-gnu/bin//aarch64-linux-gnu- --gcc-toolchain=/opt/toolchains/gcc-linaro-6.3.1-2017.02-x86_64_aarch64-linux-gnu -no-integrated-as -Werror=unknown-warning-option -fno-PIE -DCONFIG_AS_LSE=1 -DCC_HAVE_ASM_GOTO   -c -o firmware/keyspan/usa18x.fw.gen.o firmware/keyspan/usa18x.fw.gen.S

source_firmware/keyspan/usa18x.fw.gen.o := firmware/keyspan/usa18x.fw.gen.S

deps_firmware/keyspan/usa18x.fw.gen.o := \

firmware/keyspan/usa18x.fw.gen.o: $(deps_firmware/keyspan/usa18x.fw.gen.o)

$(deps_firmware/keyspan/usa18x.fw.gen.o):
