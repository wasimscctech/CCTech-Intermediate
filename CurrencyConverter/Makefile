clean: 
	del *.exe *.o

compile: object
	g++ -o currency_converter mainFile.o currency_converter.o

object:
	g++ -c mainFile.cpp currency_converter.cpp

run: compile
	./currency_converter