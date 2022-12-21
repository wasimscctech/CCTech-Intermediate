clean:
	del *.exe

sort: object
	g++ -o sort_by_length sort_by_length.o makefile.o sort_string_by_length.o

object:
	g++ -c sort_by_length.cpp makefile.cpp sort_string_by_length.cpp

run:
	./sort_by_length
