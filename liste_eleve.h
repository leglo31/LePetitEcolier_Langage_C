#ifndef LISTE_ELEVE_H
#define LISTE_ELEVE_H

#define NB_ELEVES_MAX 375

#include "eleve.h"

int enregistreDansListe(Eleve_t *eleve);
void afficherEleve(void);
void afficheListeEleves(void);
int eleveBufferToFichier(char *eleveBuffer, Eleve_t *eleve);
int ecritureDansListe(void);

#endif