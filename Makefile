#Makefile

all: add_nbo

add_nbo: add_nbo.o main.o
	g++ -o add_nbo add_nbo.o main.o

main.o: add_nbo.h main.cpp

add_nbo.o: add_nbo.h add_nbo.cpp

clean:
	rm -f add_nbo
	rm -f *.o
