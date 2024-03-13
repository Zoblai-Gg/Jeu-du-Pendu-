CC = gcc
CFLAGS = -g

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

all : pendu

%.o : %.c
	$(CC) -o $@ -c $<

pendu : $(OBJ)
	$(CC) -o pendu $^

clean :
	rm -rf *.o
