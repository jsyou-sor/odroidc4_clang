cmd_drivers/video/fbdev/core/fb.o := aarch64-linux-gnu-ld -EL    -r -o drivers/video/fbdev/core/fb.o drivers/video/fbdev/core/fbmem.o drivers/video/fbdev/core/fbmon.o drivers/video/fbdev/core/fbcmap.o drivers/video/fbdev/core/fbsysfs.o drivers/video/fbdev/core/modedb.o drivers/video/fbdev/core/fbcvt.o drivers/video/fbdev/core/fb_defio.o ; scripts/mod/modpost drivers/video/fbdev/core/fb.o