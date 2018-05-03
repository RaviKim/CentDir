OBJECTS = main.o read.o

test: $(OBJECTS)
	g++ -o test $(OBJECTS)

main.o: iostream main.cpp
	g++ -c main.cpp

read.o:  iostream read.cpp
	g++ -c read.cpp

clean:
	rm $(OBJECTS)
