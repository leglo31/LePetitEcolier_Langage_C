#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "eleve.h"

static int idCourante = 0;

// Fonction retournant l'ID courant pour l'inscription d'un élève
int idEleveCourant(void)
{
    idEleveSuivant(idCourante);
    return idCourante;
}

// Fonction permettant de trouver le prochain ID vide
int idEleveSuivant(int id)
{
    idCourante = id + 1;
    return id;
}

// Crée un élève, et inclue les données rentrées dans le formulaire.
// Affichage erreur s'il n'y a pas d'informations données.
Eleve_t *nouvelEleve(int idEleve, char *nom, char *prenom, int age, int anneeNaissance)
{
    Eleve_t *eleve = (Eleve_t *)malloc(sizeof(Eleve_t));
    if (eleve != NULL)
    {
        eleve->idEleve = idEleveCourant();
        strcpy(eleve->nom, nom);
        strcpy(eleve->prenom, prenom);
        eleve->age = age;
        eleve->anneeNaissance = anneeNaissance;
    }
    else
    {
        printf("Erreur nouvelEleve");
    }
    return eleve;
}

/*
    Libère la mémoire empruntée par la création d'un élève.
    N'interagit pas avec les sauvegardes.

void cleanStudentMemory(Eleve_t * eleve) {
    free(eleve);
}
*/