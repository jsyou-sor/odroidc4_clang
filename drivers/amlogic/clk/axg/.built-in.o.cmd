cmd_drivers/amlogic/clk/axg/built-in.o :=  aarch64-linux-gnu-ld -EL    -r -o drivers/amlogic/clk/axg/built-in.o drivers/amlogic/clk/axg/axg.o drivers/amlogic/clk/axg/axg_ao.o drivers/amlogic/clk/axg/axg_clk-pll.o drivers/amlogic/clk/axg/axg_clk_sdemmc.o drivers/amlogic/clk/axg/axg_clk_media.o drivers/amlogic/clk/axg/axg_clk_misc.o ; scripts/mod/modpost drivers/amlogic/clk/axg/built-in.o
