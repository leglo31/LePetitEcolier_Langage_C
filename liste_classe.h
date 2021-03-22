#ifndef LISTE_CLASSE_H
#define LISTE_CLASSE_H

#define NB_CLASSES_MAX 15
#define TAILLE_LIGNE_INFOS_CLASSE 10

#include "affichage.h"
#include "saisie.h"
#include "classe.h"

int enregistreDansListeClasse(Classe_t *classe);
void restaureDansListeClasse(Classe_t *classe);
void showClasse(void);
void allClasses(void);
int classeBufferToFichier(char *classeBuffer, Classe_t *classe);
int appendClassList(void);
int readClassList(void);

#endif