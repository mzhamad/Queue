myProgram:	Queue.o main.o
		g++ Queue.o main.o -o myProgram

Queue.o:	Queue.cpp Queue.hpp
		g++ -c Queue.cpp
	
main.o:		main.cpp Queue.hpp
		g++ -c main.cpp

clean:
		rm -f *.o
		rm myProgram
