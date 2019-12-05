#include <stdlib.h>
#include <stdio.h>

#include "classe.h"
#include "formulaire.h"

static int idClasseCourante = 0;

/*
    Retourne l'ID courant pour l'inscription ou la modification d'un élève
*/
int idClasseCourant(void)
{
    return idClasseCourante;
}

/*
    Retourne le prochain id pour l'inscription d'un nouvel élève
*/
int idClasseSuivant(void)
{
    idClasseCourante++;
    return idClasseCourante;
}

/*
    Crée une nouvelle classe
    Retourne NULL si erreur
*/
Classe_t * nouvelleClasse(int id, SectionClasse_t section) {
    Classe_t * classe = (Classe_t *) malloc(sizeof(Classe_t));
    if (classe != NULL) {
        classe->idClasse = id;
        classe->section = section;
    } else {
        fprintf(stderr, "nouvelleClasse : impossible de créer la classe");
    }
    return classe;
}