all : main.o sorts.o arraywork.o statarray.o
	g++ main.o sorts.o arraywork.o statarray.o

main.o : main.c
	g++ -c main.c -std=c++17
sorts.o         :       sorts.c
	g++ -c sorts.c
statarray.o     :       statarray.c
	g++ -c statarray.c
arraywork.o     :       array.work.c

clean :
	rm -rf *.o a.out

