cmd_sound/usb/line6/snd-usb-line6.o := aarch64-linux-gnu-ld -EL    -r -o sound/usb/line6/snd-usb-line6.o sound/usb/line6/capture.o sound/usb/line6/driver.o sound/usb/line6/midi.o sound/usb/line6/midibuf.o sound/usb/line6/pcm.o sound/usb/line6/playback.o ; scripts/mod/modpost sound/usb/line6/snd-usb-line6.o
