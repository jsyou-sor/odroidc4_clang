cmd_fs/crypto/fscrypto.o := aarch64-linux-gnu-ld -EL    -r -o fs/crypto/fscrypto.o fs/crypto/crypto.o fs/crypto/fname.o fs/crypto/hooks.o fs/crypto/keyinfo.o fs/crypto/policy.o fs/crypto/bio.o ; scripts/mod/modpost fs/crypto/fscrypto.o
