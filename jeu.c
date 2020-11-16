#include "jeu.h"

void remplissage(t_jeu jeu)
{
  for (int i=0;i<4;i++)
  {
    for (int j=1;j<14;j++)
    {
      t_carte carte;
      carte.valeur = j;
      carte.symbole = i;
      jeu[j-1+13*i] = carte;
    }
  }
}

void afficheJeu(t_jeu jeu)
{
  for (int i=0;i<52;i++)
      afficheCarte(jeu[i]);
}

void melange(t_jeu jeu, int nbPerm)
{
  for (int i=0;i<nbPerm;i++)
  {
    int indice_1 = rand() % 51 + 1;
    int indice_2 = rand() % 51 + 1;
    t_carte buffer_2 = jeu[indice_2];
    jeu[indice_2] = jeu[indice_1];
    jeu[indice_1] = buffer_2;
  }
}
