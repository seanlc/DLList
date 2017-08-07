CC= g++
CFLAGS= -std=c++11 -Wall -ggdb

main: DLList.h.gch main.cpp
	$(CC) $(CFLAGS) -o main main.cpp
DLList.h.gch: DLList.h
	$(CC) $(CFLAGS) DLList.h
clean:
	rm -f main DLList.h.gch
valgrind:
	valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --track-origins=yes ./main
