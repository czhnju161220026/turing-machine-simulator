CC = g++
CPPFLAGS = -std=c++11

CPPFILES = $(shell find ./ -name "*.cpp")
OBJS = $(CPPFILES:.cpp=.o)


turing: 
	$(CC) -c $(CPPFILES) 
	$(CC) $(CPPFLAGS) $(OBJS) -o turing


.PHONY: clean test

clean: 
	rm -f turing
	rm -f *.o

test: clean turing
	./turing ../test