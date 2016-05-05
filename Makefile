# Basic Makefile for ptscheme

# Set our paths to traditional locations for files:
#      ./src - c source files
#      ./include - c header files

vpath %.c src
vpath %.h include
ODIR = obj
BDIR = bin

CC = clang
CFLAGS = -std=c99 -Wall -g -I include

_OBJ = monsters.o utility.o dice.o magic.o conditions.o spells.o trinkets.o art.o

OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

all: encounter darklake

encounter: encounter.o $(OBJ)
	$(CC) -o $(BDIR)/$@ $^ $(CFLAGS)

darklake: darklake.o $(OBJ)
	$(CC) -o $(BDIR)/$@ $^ $(CFLAGS)

$(ODIR)/%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o
