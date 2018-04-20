all: testclass.cpp
	g++ -Wall -Werror -o virtual virtual.cpp
clean:
	rm -f virtual virtual.o

test:
	rm -f virtual virtual.o
	g++ -o virtual virtual.cpp
