#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "eleve.h"
#include "affichage.h"
#include "menu.h"

static int idCourante = 0;

/*
    Retourne l'ID courant pour l'inscription ou la modification d'un élève
*/
int idEleveCourant(void)
{
    return idCourante;
}

/*
    Retourne le prochain id pour l'inscription d'un nouvel élève
*/
int idEleveSuivant(void)
{
    idCourante++;
    return idCourante;
}

/*
    Crée un élève, et inclue les données rentrées dans le formulaire.
    Affichage erreur s'il n'y a pas d'informations données.
*/
Eleve_t *nouvelEleve(int idEleve, char *nom, char *prenom, int age, int anneeNaissance, int idClasse)
{
    Eleve_t *eleve = (Eleve_t *)malloc(sizeof(Eleve_t));
    if (eleve != NULL)
    {
        eleve->idEleve = idEleveSuivant();
        strcpy(eleve->nom, nom);
        strcpy(eleve->prenom, prenom);
        eleve->age = age;
        eleve->anneeNaissance = anneeNaissance;
        eleve->idClasse = idClasse;
    }
    else
    {
        printf("\nErreur nouvelEleve\n");
    }
    return eleve;
}

/*
    Libère la mémoire nouvel élève

void effacerEleve(Eleve_t * eleve)
{
    free(eleve);
}
*/