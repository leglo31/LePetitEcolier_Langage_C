// Gestion du menu d'accueil
#include <stdio.h>
#include <stdlib.h>

#include "menu.h"
#include "formulaire.h"
#include "eleve.h"
#include "affichage.h"
#include "annuaire.h"

// Constantes
#define CHOIX_QUITTER 0
#define CHOIX_ELEVE 1
#define CHOIX_ELEVE_RECHERCHE 2
#define CHOIX_CLASSE 3
#define CHOIX_ECOLE 4
#define CHOIX_ELEVE_INSCRIPTION 5
#define CHOIX_ELEVE_MODIFICATION 6
#define CHOIX_ELEVE_DESINSCRIPTION 7
#define CHOIX_VALIDER 1
#define CHOIX_MODIFIER 2
#define CHOIX_AFFICHER 3

// Gère le menu Accueil
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

/*-------------------------------------------------------------------
    Gère le choix de l'utilisateur pour le menu Accueil
-------------------------------------------------------------------*/
void traiterChoixAccueil(int choix)
{
    // Traiter choix
    switch (choix)
    {
    case CHOIX_ELEVE:;
        // afficherEleve();
        // break;
    case CHOIX_ELEVE_RECHERCHE:;
    case CHOIX_CLASSE:;
        // afficherClasse();
        // break;
    case CHOIX_ECOLE:;
        afficherAnnuaire();
        break;
    case CHOIX_ELEVE_INSCRIPTION:
        formulaireInscriptionEleve();
        break;
    case CHOIX_ELEVE_MODIFICATION:;
    case CHOIX_ELEVE_DESINSCRIPTION:;
    }
}

int menuFormulaireInscription(void)
{
    int choix;
    do
    {
        do
        {
            printf("\n[1] Valider"
                   "\n[2] Modifier"
                   "\n[3] Afficher"
                   "\n[0] Quitter"
                   "\n\nQue voulez-vous faire ? ");
            scanf("%d", &choix);
        } while (choix > 3 && choix < 0);
    } while (choix != CHOIX_QUITTER);
    return CHOIX_QUITTER;
}

void traiterChoixInscription(int choix)
{
    // Traiter choix
    switch (choix)
    {
    case CHOIX_VALIDER:
        sauveDansAnnuaire();
        break;
    case CHOIX_MODIFIER:;
    case CHOIX_AFFICHER:;
    }
}

/*
void inscriptionConfirmer(Eleve_t *eleve) {

}
*/