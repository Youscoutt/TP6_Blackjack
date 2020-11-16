#ifndef __JEU_H__
#define __JEU_H__
#include "carte.h"

typedef t_carte t_jeu[52];

void remplissage(t_jeu jeu);
void afficheJeu(t_jeu jeu);
void melange(t_jeu jeu, int nbPerm);
#endif
