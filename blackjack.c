#include "partie.h"

int main()
{
  //Test Question 1) pour creation et affichage d'une carte
  /*t_carte rouge_8;
  rouge_8.valeur = 8;
  rouge_8.symbole = trefle;
  printf("Ma carte est le %d de %d\n",rouge_8.valeur,rouge_8.symbole);*/

  //Test Question 2) et affichage "graphique" des cartes
  /*t_carte pique_2;
  pique_2.valeur = 2;
  pique_2.symbole = pique;
  afficheCarte(pique_2);
  t_carte coeur_as;
  coeur_as.valeur = 1;
  coeur_as.symbole = coeur;
  afficheCarte(coeur_as);
  t_carte carreau_10;
  carreau_10.valeur = 10;
  carreau_10.symbole = carreau;
  afficheCarte(carreau_10);
  t_carte trefle_roi;
  trefle_roi.valeur = 13;
  trefle_roi.symbole = trefle;
  afficheCarte(trefle_roi);*/

  //Question 4) Remplissage du jeu
  t_jeu jeu;
  remplissage(jeu);
  //Question 5) Affichage du jeu
  afficheJeu(jeu);
  //Question 6) Melange puis affichage du jeu
  melange(jeu,159753);
  printf("Voici mon jeu melange!\n");
  afficheJeu(jeu);
  t_partie partie;
  initPartie(partie,"Youssef","Croupier");
  //int* ptPartie = &partie;
  distribution(partie,0);
  distribution(partie,1);
  distribution(partie,0);
  distribution(partie,1);
  printf("Youssef a %d carte(s) en main.\n",partie.main_joueur.nbCartes);
}
