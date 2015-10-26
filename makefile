Dictionary: Dictionary.o main.o
	g++ Dictionary.o main.o -o Dictionary
Dictionary.o: Dictionary.cpp global.h
	g++ -c Dictionary.cpp global.h
main.o: main.cpp global.h
	g++ -c main.cpp global.h
clean:
	rm *.o Dictionary
