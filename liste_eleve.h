#ifndef LISTE_ELEVE_H
#define LISTE_ELEVE_H

#define NB_ELEVES_MAX 375
#define TAILLE_LIGNE_INFOS_ELEVE 79

#include <string.h>

#include "eleve.h"
#include "saisie.h"

int enregistreDansListe(Eleve_t *eleve);
void restaureDansListe(Eleve_t *eleve);
void afficherEleve(void);
void afficheListeEleves(void);
int eleveBufferToFichier(char *eleveBuffer, Eleve_t *eleve);
int ecritureDansListe(void);
int lectureDansListe(void);

#endif