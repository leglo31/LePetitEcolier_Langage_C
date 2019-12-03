#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "eleve.h"
#include "affichage.h"
#include "menu.h"

static int idCourante = 0;

/* Fonction retournant l'ID courant pour l'inscription d'un élève
int idEleveCourant(void)
{
    idEleveSuivant(idCourante);
    return idCourante;
}*/

// Fonction permettant de trouver le prochain ID vide
int idEleveSuivant(void)
{
    return idCourante = idCourante + 1;
}

// Crée un élève, et inclue les données rentrées dans le formulaire.
// Affichage erreur s'il n'y a pas d'informations données.
Eleve_t *nouvelEleve(int idEleve, char *nom, char *prenom, int age, int anneeNaissance)
{
    Eleve_t *eleve = (Eleve_t *)malloc(sizeof(Eleve_t));
    if (eleve != NULL)
    {
        eleve->idEleve = idEleveSuivant();
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
// Demande à quel élève se réfère la demande d'affichage
int quelEleve(void)
{
    introMenu("Affichage Eleve");
    int idWhich;
    printf("Quel ID ? ");
    scanf("%d", &idWhich);
    afficherEleve(idWhich);
    return idWhich;
}
*/

// Demande l'indice de l'élève à afficher

// Donne des valeurs prédéfinies à un élève
void valeurs(Eleve_t *eleve)
{
    Eleve_t *nouvelEleve(int idEleve, char *nom, char *prenom, int age, int anneeNaissance);
    eleve->idEleve = 1;
    strcpy(eleve->nom, "Michel");
    strcpy(eleve->prenom, "Pierre");
    eleve->age = 12;
    eleve->anneeNaissance = 2008;
}

// Afficher un élève
void afficherEleve(Eleve_t *eleve)
{
    introMenu("Affichage Eleve");
    int choix;
    // valeurs();
    printf("ID     : %d"
           "\nNom    : %s"
           "\nPrénom : %s"
           "\nAge    : %d"
           "\nAnnée de naissance : %d",
           1, eleve->nom, eleve->prenom, eleve->age, eleve->anneeNaissance);
    printf("\n\nAppuyez sur Entrée pour continuer");
    scanf("%d", &choix);
}