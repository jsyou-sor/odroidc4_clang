cmd_drivers/gpu/arm/midgard/tests/kutf/kutf.o := aarch64-linux-gnu-ld -EL    -r -o drivers/gpu/arm/midgard/tests/kutf/kutf.o drivers/gpu/arm/midgard/tests/kutf/kutf_mem.o drivers/gpu/arm/midgard/tests/kutf/kutf_resultset.o drivers/gpu/arm/midgard/tests/kutf/kutf_suite.o drivers/gpu/arm/midgard/tests/kutf/kutf_utils.o drivers/gpu/arm/midgard/tests/kutf/kutf_helpers.o drivers/gpu/arm/midgard/tests/kutf/kutf_helpers_user.o ; scripts/mod/modpost drivers/gpu/arm/midgard/tests/kutf/kutf.o