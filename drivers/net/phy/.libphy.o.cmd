cmd_drivers/net/phy/libphy.o := aarch64-linux-gnu-ld -EL    -r -o drivers/net/phy/libphy.o drivers/net/phy/phy.o drivers/net/phy/phy_device.o drivers/net/phy/mdio_bus.o drivers/net/phy/mdio_device.o drivers/net/phy/swphy.o ; scripts/mod/modpost drivers/net/phy/libphy.o
