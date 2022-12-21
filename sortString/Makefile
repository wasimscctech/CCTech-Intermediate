clean:
	del *.exe *.o

sort: object
	g++ -o sort_by_length sort_by_length.o sort_string_by_length.o

object:
	g++ -c sort_by_length.cpp sort_string_by_length.cpp

run:
	./sort_by_length
