// Gestion du menu d'accueil
#include <stdio.h>
#include <stdlib.h>

#include "menu.h"
#include "affichage.h"
#include "formulaire.h"
#include "eleve.h"
#include "liste_eleve.h"

// Constantes
#define CHOIX_QUITTER 0
#define CHOIX_ELEVE 1
#define CHOIX_ELEVE_RECHERCHE 2
#define CHOIX_CLASSE 3
#define CHOIX_ECOLE 4
#define CHOIX_ELEVE_INSCRIPTION 5
#define CHOIX_ELEVE_MODIFICATION 6
#define CHOIX_ELEVE_DESINSCRIPTION 7

/*
    Laurent : Gère le menu Accueil
*/
void menuAccueil(void)
{
    int choix;
    do
    {
        do
        {
            introMenu("Accueil");
            printf(
                "Affichage\n"
                "  [1] Afficher élève\n"
                "  [2] Rechercher l'élève par son nom/prénom\n"
                "  [3] Afficher classe\n"
                "  [4] Afficher école\n\n"
                "Saisie\n"
                "  [5] Inscrire un nouvel élève\n"
                "  [6] Modifier l'inscription\n"
                "  [7] Désinscrire un élève\n"
                "  [0] Quitter\n\n"
                "  Que souhaitez-vous faire ? : ");
            scanf("%d", &choix);
            traiterChoixAccueil(choix);
        } while (choix > 0 && choix < 7);
    } while (choix != CHOIX_QUITTER);
}

/*
    Laurent : Gère le choix de l'utilisateur pour le menu Accueil
*/
void traiterChoixAccueil(int choix)
{
    // Traiter choix
    switch (choix)
    {
    case CHOIX_ELEVE:;
        afficherEleve();
        break;
    case CHOIX_ELEVE_RECHERCHE:;
    case CHOIX_CLASSE:;
    case CHOIX_ECOLE:
        afficheListeEleves();
        break;
    case CHOIX_ELEVE_INSCRIPTION:
        formulaireInscriptionEleve();
        break;
    case CHOIX_ELEVE_MODIFICATION:;
    case CHOIX_ELEVE_DESINSCRIPTION:;
    }
}