cmd_net/sunrpc/auth_gss/rpcsec_gss_krb5.o := aarch64-linux-gnu-ld -EL    -r -o net/sunrpc/auth_gss/rpcsec_gss_krb5.o net/sunrpc/auth_gss/gss_krb5_mech.o net/sunrpc/auth_gss/gss_krb5_seal.o net/sunrpc/auth_gss/gss_krb5_unseal.o net/sunrpc/auth_gss/gss_krb5_seqnum.o net/sunrpc/auth_gss/gss_krb5_wrap.o net/sunrpc/auth_gss/gss_krb5_crypto.o net/sunrpc/auth_gss/gss_krb5_keys.o ; scripts/mod/modpost net/sunrpc/auth_gss/rpcsec_gss_krb5.o
