#include <stdlib.h>
#include <stdio.h>

#include "classe.h"
#include "formulaire.h"
#include "menu.h"

static int idClasseCourante = 0;

/*
    Retourne l'ID courant pour la création d'une classe
*/
int idClasseCourant(void)
{
    return idClasseCourante;
}

/*
    Retourne le prochain id pour la création d'une nvelle classe
*/
int idClasseSuivant(void)
{
    idClasseCourante++;
    return idClasseCourante;
}

/*
    Laurent : Retourne la section de la classe en str
*/
char *classeToString(int idClasse) {
    if (idClasse == 1) {
        return "CP";
    }
    else if (idClasse == 2) {
        return "CE1";
    }
    else if (idClasse == 3) {
        return "CE2";
    }
    else if (idClasse == 4) {
        return "CM1";
    }
    else if (idClasse == 5) {
        return "CM2";
    }
    else {
        return "N/A";
    }
}

/*
    Crée une nouvelle classe
    Retourne NULL si erreur
*/
Classe_t *nouvelleClasse(int id, int section)
{
    Classe_t *classe = (Classe_t *)malloc(sizeof(Classe_t));
    if (classe != NULL)
    {
        classe->idClasse = idClasseSuivant();
        classe->section = section;
    }
    else
    {
        fprintf(stderr, "nouvelleClasse : impossible de créer la classe");
    }
    return classe;
}