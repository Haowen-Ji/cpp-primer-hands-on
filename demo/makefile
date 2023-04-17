CC = g++
CFLAGS = -g -Wall

introduction: seperate.o
	$(CC) $(CFLAGS) -o introduction introduction.cpp seperate.o

seperate.o:
	$(CC) $(CFLAGS) -c seperate.cpp 

clean:
	rm introduction

