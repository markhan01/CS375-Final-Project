# Use the first FLAGS definition for debugging, the 2nd for optimizing your code
FLAGS = -Wall -Wextra -g

EXECUTABLE = quicksort

all: quicksort

quicksort: Lomuto.o Driver.cpp
	g++ -o quicksort Lomuto.o Driver.cpp

Lomuto.o: Lomuto.cpp
	g++ -c Lomuto.cpp

scrub: clean
	rm ~* *.swp *\#

run: $(EXECUTABLE)
	./$(EXECUTABLE)

clean:
	rm -f *.o $(EXECUTABLE)