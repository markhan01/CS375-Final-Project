FLAGS = -std=c++11 -Wall -Wextra -g -c
EXECUTABLE = quicksort

all: Lomuto.o RandomizedQuicksort.o Hoare.o Driver.o $(EXECUTABLE)

Lomuto.o: Lomuto.cpp
	g++ $(FLAGS) Lomuto.cpp

RandomizedQuicksort.o:	RandomizedQuicksort.cpp
	g++ $(FLAGS) RandomizedQuicksort.cpp

Hoare.o:	Hoare.cpp
	g++ $(FLAGS) Hoare.cpp

Driver.o:	Driver.cpp Lomuto.h RandomizedQuicksort.h Hoare.h
	g++ $(FLAGS) Driver.cpp

$(EXECUTABLE):
	g++ Lomuto.o RandomizedQuicksort.o Hoare.o Driver.o -o $(EXECUTABLE)

scrub: clean
	rm ~* *.swp *\#

run: $(EXECUTABLE)
	./$(EXECUTABLE)

clean:
	rm -f *.o $(EXECUTABLE)
