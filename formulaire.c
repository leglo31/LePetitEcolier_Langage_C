#include <stdio.h>
#include <stdlib.h>

#include "liste_eleve.h"
#include "formulaire.h"
#include "menu.h"
#include "affichage.h"

/*
    Formulaire d'inscription d'un élève
*/
void formulaireInscriptionEleve(void)
{
    Eleve_t *eleve = nouvelEleve(0, "", "", 0, 0);
    introMenu("Inscription");
    printf("ID Courante : %d\n", eleve->idEleve);
    printf("Nom    : ");
    scanf("%s", eleve->nom);
    printf("Prénom : ");
    scanf("%s", eleve->prenom);
    printf("Age    : ");
    scanf("%d", &(eleve->age));
    printf("Année de naissance : ");
    scanf("%d", &(eleve->anneeNaissance));
    menuInscription(eleve);
}

/*
    Menu d'inscription (post formulaire)
*/
int menuInscription(Eleve_t *eleve)
{
    int choixInscription;
    do
    {
        do
        {
            printf("\n[1] Valider"
                   "\n[2] Modifier"
                   "\n[3] Afficher"
                   "\n[0] Quitter"
                   "\n\nQue voulez-vous faire ? ");
            scanf("%d", &choixInscription);
            traiterChoixInscription(choixInscription, eleve);
        } while (choixInscription > 3 && choixInscription < 0);
    } while (choixInscription != CHOIX_QUITTER);
    return CHOIX_QUITTER;
}

/*
    Traitement du choix menuInscription
*/
void traiterChoixInscription(int choix, Eleve_t *eleve)
{
    // Traiter choix
    switch (choix)
    {
    case CHOIX_INSCRIPTION_VALIDER:
        enregistreDansListe(eleve);
        break;
    case CHOIX_INSCRIPTION_MODIFIER:;
    }
}