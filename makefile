CC = gcc
OBJS = pepe.c
LIBS = lncurses
EXEC = pepe
PREFIX = /usr/local
BINDIR = $(PREFIX)/bin

pepe: $(OBJS)
	$(CC) $(OBJS) -$(LIBS) -o $(EXEC)

install:
	cp $(EXEC) $(BINDIR)

clean:
	rm $(EXEC)
