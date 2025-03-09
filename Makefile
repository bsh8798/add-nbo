all: add-nbo

add-nbo: main.o getNum.o
	g++ -o add-nbo main.o getNum.o

main.o: getNum.h main.cpp
	g++ -c -o main.o main.cpp

getNum.o: getNum.h getNum.cpp
	g++ -c -o getNum.o getNum.cpp

clean:
	rm -f add-nbo
	rm -f *.o
