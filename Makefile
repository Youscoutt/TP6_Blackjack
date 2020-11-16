# Modèle de fichier Makefile, à adapter pour le TP

# options de compilation
CC = gcc
CCFLAGS = -Wall
LIBS = -lX11
LIBSDIR = -L/usr/lib/X11

# fichiers du projet
SRC = carte.c	jeu.c partie.c blackjack.c
OBJ = $(SRC:.c=.o)
EXEC = run.out


# règle initiale
all: $(EXEC)

# dépendance des .h
carte.o: carte.h
jeu.o: carte.h jeu.h
partie.o:	jeu.h partie.h
blackjack.o: partie.h
# règles de compilation
%.o: %.c
	$(CC) $(CCFLAGS) -o $@ -c $<

# règles d'édition de liens
$(EXEC): $(OBJ)
	$(CC) -o $@ $^ $(LIBS) $(LIBSDIR)

# règles supplémentaires
clean:
	rm -f *.o
mproper:
	rm -f $(EXEC) *.o
