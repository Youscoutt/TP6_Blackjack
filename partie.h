#ifndef __PARTIE_H__
#define __PARTIE_H__
#include "jeu.h"
#include "string.h"

typedef struct{
  t_jeu jeu;
  int nbCartes;
  char nomJoueur[20];
}t_main;

typedef struct{
  t_jeu pioche;
  t_main main_ordi;
  t_main main_joueur;
  int posPioche;
}t_partie;

void initPartie(t_partie partie, char joueur_1[20], char joueur_2[20]);

void distribution(t_partie partie,int joueur);


#endif
