prog: 
	@touch prog
	@echo "gcc prog.c data.c -o prog"
files.lst: 
	@touch files.lst
	@echo "dir /B > files.lst"
distr.zip: 
	@touch distr.zip
	@echo "7z a distr.zip *.*"
