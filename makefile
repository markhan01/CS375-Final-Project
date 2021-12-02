# Use the first FLAGS definition for debugging, the 2nd for optimizing your code
FLAGS = -Wall -Wextra -g

EXECUTABLE = quicksort

all: quicksort

quicksort: Lomuto.o RandomizedQuicksort.o Driver.cpp
	g++ -o quicksort Lomuto.o RandomizedQuicksort.o Driver.cpp

Lomuto.o: Lomuto.cpp
	g++ -c Lomuto.cpp

RandomizedQuicksort.o: RandomizedQuicksort.cpp
	g++ -c RandomizedQuicksort.cpp

scrub: clean
	rm ~* *.swp *\#

run: $(EXECUTABLE)
	./$(EXECUTABLE)

clean:
	rm -f *.o $(EXECUTABLE)