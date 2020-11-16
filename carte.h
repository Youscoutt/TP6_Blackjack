#ifndef __CARTE_H__
#define __CARTE_H__
#include <stdio.h>
#include <stdlib.h>

typedef enum{coeur,pique,carreau,trefle}t_symbole;

typedef struct{
  int valeur;
  t_symbole symbole;
}t_carte;

void afficheCarte(t_carte carte);

#endif
