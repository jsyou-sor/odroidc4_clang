cmd_drivers/amlogic/crypto/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/amlogic/crypto/built-in.o drivers/amlogic/crypto/aml-cryp-dma.o drivers/amlogic/crypto/aml-aes-dma.o drivers/amlogic/crypto/aml-tdes-dma.o drivers/amlogic/crypto/aml-sha-dma.o ; scripts/mod/modpost drivers/amlogic/crypto/built-in.o