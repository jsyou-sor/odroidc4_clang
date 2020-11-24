cmd_security/apparmor/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o security/apparmor/built-in.o security/apparmor/apparmor.o ; scripts/mod/modpost security/apparmor/built-in.o
