# chisynth for pet makefile
#
# taken from:
# http://www.cs.usask.ca/staff/oster/makefiles.html

emu: hello_world.prg
	/Applications/VICE/tools/xpet -model 4032 hello_world.prg

hello_world.prg: hello_world.c MyLib.c 
	cl65 hello_world.c MyLib.c -t pet -o hello_world.prg 
	
clean: 
	rm -f hello_world.o MyLib.o
	
freshbuild:
	clear
	rm -f hello_world.prg MyLib.prg
	rm -f hello_world.o MyLib.o
	cl65 hello_world.c MyLib.c -t pet -o hello_world.prg
	/Applications/VICE/tools/xpet -model 4032 hello_world.prg