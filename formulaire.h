#ifndef FORMULAIRE_H
#define FORMULAIRE_H

#define CHOIX_QUITTER 0
#define CHOIX_INSCRIPTION_VALIDER 1
#define CHOIX_INSCRIPTION_MODIFIER 2

#include "eleve.h"

void formulaireInscriptionEleve(void);
int menuInscription(Eleve_t *eleve);
void traiterChoixInscription(int choix, Eleve_t * eleve);

#endif