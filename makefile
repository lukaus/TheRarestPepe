CC = g++
OBJS = pepe.cpp
LIBS = lncurses
EXEC = pepe
PREFIX = /usr/local
BINDIR = $(PREFIX)/bin

p1: $(OBJS)
	$(CC) $(OBJS) -$(LIBS) -o $(EXEC)

install:
	cp $(EXEC) $(BINDIR)

clean:
	rm $(EXEC)
