cmd_fs/crypto/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o fs/crypto/built-in.o fs/crypto/fscrypto.o ; scripts/mod/modpost fs/crypto/built-in.o
