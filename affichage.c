// Utilitaires d'affichage
#include <stdio.h>
#include <stdlib.h>

#include "affichage.h"
#include "classe.h"
#include "eleve.h"

// Efface l'écran
void effaceEcran(void)
{
    system("@cls||clear");
}

// Efface l'écran et affiche l'en-tête de la page
void introMenu(char *titre)
{
    effaceEcran();
    printf("Le Petit écolier           "
           "Gestionnaire d'élèves         "
           "%s\n\n",
           titre);
}

// Afficher un élève
void afficherEleve(void)
{
}

// Afficher une classe
void afficherClasse(void)
{
}

// Afficher l'école revient à afficher toutes les classes
void afficherEcole(void)
{
    for (int i = 0; i < 15; i++)
    {
        afficherClasse();
    }
}