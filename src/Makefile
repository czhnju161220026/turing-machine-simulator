CC = g++
CPPFLAGS = -std=c++11

CPPFILES = $(shell find ./ -name "*.cpp")
OBJS = $(CPPFILES:.cpp=.o)


turing: 
	$(CC) -c $(CPPFILES) 
	$(CC) $(CPPFLAGS) $(OBJS) -o turing


.PHONY: clean test1 test2 test3

clean: 
	rm -f turing
	rm -f *.o

test1: clean turing
	./turing ../test1

test2: clean turing
	./turing ../test2

test3: clean turing
	./turing ../test3

