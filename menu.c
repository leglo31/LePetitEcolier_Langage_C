// Gestion du menu d'accueil
#include <stdio.h>
#include <stdlib.h>

#include "menu.h"
#include "affichage.h"
#include "formulaire.h"

// Constantes
#define CHOIX_QUITTER 0
#define CHOIX_ELEVE_RCC_ID 1
#define CHOIX_ELEVE_RCC_NP 2
#define CHOIX_ELEVE_INSCRIRE 3
#define CHOIX_ELEVE_MODIFIER 4
#define CHOIX_ELEVE_DESINSCRIRE 5
#define CHOIX_CLASSE_AFFICHER 6
#define CHOIX_CLASSE_CREER 7
#define CHOIX_CLASSE_SUPPRIMER 8
#define CHOIX_ECOLE_AFFICHER 9

/*
    Quentin & Laurent : Gère le menu Accueil
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
                "Elève\n"
                "  [1] Rechercher un élève par son id\n"
                "  [2] Rechercher un élève par son nom et son prénom\n"
                "  [3] Inscrire un nouvel élève\n"
                "  [4] Modifier les informations d'un élève\n"
                "  [5] Désinscrire un élève\n\n"
                "Classe\n"
                "  [6] Afficher une classe\n"
                "  [7] Créer une classe\n"
                "  [8] Supprimer une classe\n"
                "  [9] Afficher l'école\n\n"
                "  [0] Quitter\n\n"
                "  Que souhaitez-vous faire ? : ");
            scanf("%d", &choix);
            traiterChoixAccueil(choix);
        } while (choix > 0 && choix < 9);
    } while (choix != CHOIX_QUITTER);
}

/*
    Quentin & Laurent : Gère le choix de l'utilisateur pour le menu Accueil
*/
void traiterChoixAccueil(int choix)
{
    // Traiter choix
    switch (choix)
    {
    case CHOIX_ELEVE_RCC_ID:
        afficherEleve();
        break;
    case CHOIX_ELEVE_RCC_NP:
        WIP();
        break;
    case CHOIX_ELEVE_INSCRIRE:
        formulaireInscriptionEleve();
        break;
    case CHOIX_ELEVE_MODIFIER:
        WIP();
        break;
    case CHOIX_ELEVE_DESINSCRIRE:
        WIP();
        break;
    case CHOIX_CLASSE_AFFICHER:
        showClasse();
        break;
    case CHOIX_CLASSE_CREER:
        formulaireCreationClasse();
        break;
    case CHOIX_CLASSE_SUPPRIMER:
        WIP();
        break;
    case CHOIX_ECOLE_AFFICHER:
        afficheListeEleves();
        break;
    }
}