#include <stdio.h>
#include <stdlib.h>

#include "affichage.h"
#include "eleve.h"

/*
    Laurent : Utilitaires d'affichage
*/

// Efface l'écran
void effaceEcran(void)
{
    system("@cls||clear");
}

// Efface l'écran et affiche l'en-tête de la page
void introMenu(char *titre)
{
    effaceEcran();
    printf("Le Petit écolier          "
           "Gestionnaire d'élèves          "
           "%s\n\n",
           titre);
}