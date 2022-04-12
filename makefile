%.o: %.cpp
satellite:	satellite_main.o satellite_system.o satellite_virtual_machine.o satellite_compiler.o

satellite_main.o: satellite_main_001.cpp
	dpcpp -o satellite_main.o satellite_main_001.cpp -c

satellite_system.o: satellite_system.cpp
	dpcpp -o satellite_system.o satellite_system.cpp -c

satellite_virtual_machine.o: satellite_virtual_machine.cpp
	dpcpp -o satellite_virtual_machine.o satellite_virtual_machine.cpp -c

satellite_compiler.o: satellite_compiler.cpp
	dpcpp -o satellite_compiler.o satellite_compiler.cpp -c

	dpcpp -o satellite_001 satellite_main.o satellite_system.o satellite_virtual_machine.o satellite_compiler.o
