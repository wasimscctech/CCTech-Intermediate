clean:
	del *.exe *.o

compile: object
	g++ -o vendingmachine mainfile.o vendingMachine.o

object:
	g++ -c mainfile.cpp vendingMachine.cpp

run:
	./vendingmachine