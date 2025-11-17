.PHONY: build run RUN clean

build:
	verilator --trace -cc systolic.sv --exe tb_systolic2.cpp --top-module systolic_top -Mdir obj_dir
	$(MAKE) -C obj_dir -f Vsystolic_top.mk Vsystolic_top

run: build
	./obj_dir/Vsystolic_top

RUN: run

see:
	gtkwave waveform.vcd


clean:
	rm -rf obj_dir waveform.vcd