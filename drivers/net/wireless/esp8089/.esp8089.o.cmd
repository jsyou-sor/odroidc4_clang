cmd_drivers/net/wireless/esp8089/esp8089.o := aarch64-linux-gnu-ld -EL    -r -o drivers/net/wireless/esp8089/esp8089.o drivers/net/wireless/esp8089/esp_debug.o drivers/net/wireless/esp8089/sdio_sif_esp.o drivers/net/wireless/esp8089/spi_sif_esp.o drivers/net/wireless/esp8089/esp_io.o drivers/net/wireless/esp8089/esp_file.o drivers/net/wireless/esp8089/esp_main.o drivers/net/wireless/esp8089/esp_sip.o drivers/net/wireless/esp8089/esp_ext.o drivers/net/wireless/esp8089/esp_ctrl.o drivers/net/wireless/esp8089/esp_mac80211.o drivers/net/wireless/esp8089/esp_utils.o drivers/net/wireless/esp8089/esp_pm.o drivers/net/wireless/esp8089/testmode.o ; scripts/mod/modpost drivers/net/wireless/esp8089/esp8089.o