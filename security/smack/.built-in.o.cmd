cmd_security/smack/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o security/smack/built-in.o security/smack/smack.o ; scripts/mod/modpost security/smack/built-in.o
