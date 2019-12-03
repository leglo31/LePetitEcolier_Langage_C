#ifndef ANNUAIRE_H
#define ANNUAIRE_H

#include <stdbool.h>

#include "eleve.h"
#include "menu.h"

int nbElevesDansAnnuaire();
int estAnnuairePlein();
bool ajouterDansAnnuaire(Eleve_t *eleve);
void afficherAnnuaire(void);
bool sauveDansAnnuaire();
void eleveToLigneFichier(char *buffer, Eleve_t *eleve);
// int lireDansAnnuaire(void);


#endif