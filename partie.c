#include "partie.h"

void initPartie(t_partie partie, char joueur_1[20], char joueur_2[20])
{
  remplissage(partie.pioche); //On remplit la pioche de la partie
  melange(partie.pioche,1000); //On melange ici le paquet (mille inversions de cartes aleatoirement)
  partie.posPioche = 0; //On initialise la position de la prochaine carte a piocher dans la pioche
  partie.main_joueur.nbCartes = 0;//On initialise la posiiton de la carte a piocher pour chaque joueur
  partie.main_ordi.nbCartes = 0;
  printf("J'ai %d cartes.\n",partie.main_ordi.nbCartes); //Test pour voir si ca marche
  strcpy(partie.main_joueur.nomJoueur,joueur_1); //On copie les noms des joueurs
  strcpy(partie.main_ordi.nomJoueur,joueur_2);
  printf("%s",partie.main_joueur.nomJoueur);
}

//Fonction pour distribuer les cartes mais causant une segmentation fault
//Il aurait probablement fallu passer par des pointeurs mais je n'ai pas reussi
void distribution(t_partie partie,int joueur)
{
  if (joueur == 0) //0 pour l'ordi
  {
    partie.main_ordi.jeu[partie.main_ordi.nbCartes] = partie.pioche[partie.posPioche];
    partie.main_ordi.nbCartes++;
    partie.posPioche++;
  }
  else if (joueur == 1) //1 pour l'humain
  {
    partie.main_joueur.jeu[partie.main_joueur.nbCartes] = partie.pioche[partie.posPioche];
    partie.main_joueur.nbCartes++;
    partie.posPioche++;
  }
}
