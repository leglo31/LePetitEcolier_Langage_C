#include <stdio.h>
#include <stdlib.h>

#include "formulaire.h"
#include "eleve.h"
#include "affichage.h"
#include "menu.h"

// Gestion de l'inscription élève
void formulaireInscriptionEleve(void)
{
    Eleve_t *eleve = nouvelEleve(0, "", "", 0, 0);
    int choix;
    introMenu("Inscription");
    while (choix != CHOIX_QUITTER) {
        printf("ID Courante : %d\n", eleve->idEleve);
        printf("Nom    : ");
        scanf("%s", eleve->nom);
        printf("Prénom : ");
        scanf("%s", eleve->prenom);
        printf("Age    : ");
        scanf("%d", &(eleve->age));
        printf("Année de naissance : ");
        scanf("%d", &(eleve->anneeNaissance));
        choix = menuFormulaireInscription();
    }
}

/*
// Valide l'inscription d'un élève
void validerInscriptionEleve(void)
{
}

// Permet de modifier le formulaire l'inscription d'un élève
// Ce qui revient à recommencer la saisie avec la même ID
void modifierInscriptionEleve(void)
{
}
*/