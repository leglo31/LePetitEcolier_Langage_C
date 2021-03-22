#ifndef FORMULAIRE_H
#define FORMULAIRE_H

#define CHOIX_QUITTER 0
#define CHOIX_INSCRIPTION_VALIDER 1
#define CHOIX_INSCRIPTION_MODIFIER 2
#define CHOIX_AFFICHER_ELEVES 3

#include "eleve.h"
#include "classe.h"

void formulaireInscriptionEleve(void);
int menuInscription(Eleve_t *eleve);
void traiterChoixInscription(int choix, Eleve_t * eleve);

void formulaireCreationClasse(void);
int menuCreation(Classe_t *classe);
void traiterChoixCreation(int choix, Classe_t *classe);

#endif