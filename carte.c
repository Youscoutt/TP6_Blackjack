#include "carte.h"

//On traite tous les cas possibles afin de construire pas a pas la chaine de caractere souhaitee
void afficheCarte(t_carte carte)
{
  printf(" ");
  //Valeur carte
  if (carte.valeur == 1)
    printf(" A");
  else if (carte.valeur > 1 && carte.valeur < 10)
    printf(" %d",carte.valeur);
  else if (carte.valeur == 10)
    printf("%d",carte.valeur);
  else if (carte.valeur == 11)
    printf(" V");
  else if (carte.valeur == 12)
    printf(" D");
  else if (carte.valeur == 13)
    printf(" R");
  //Symbole carte
  if (carte.symbole == pique)
    printf("\xE2\x99\xA0");
  else if (carte.symbole == coeur)
    printf("\xE2\x99\xA1");
  else if (carte.symbole == carreau)
    printf("\xE2\x99\xA2");
  else if (carte.symbole == trefle)
    printf("\xE2\x99\xA3");
  printf("\n");
}
