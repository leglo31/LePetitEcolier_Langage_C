#include <stdio.h>
#include <stdlib.h>

#include "liste_eleve.h"
#include "formulaire.h"
#include "menu.h"
#include "affichage.h"
#include "saisie.h"

/*
    Kévin & Quentin : Formulaire d'inscription d'un élève
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
    eleve->age = entryAge();
    videBuffer();
    // scanf("%d", &(eleve->age));
    printf("Année de naissance (2003 à 2014) : ");
    eleve->anneeNaissance = entryAnneeNaissance();
    videBuffer();
    // scanf("%d", &(eleve->anneeNaissance));
    menuInscription(eleve);
}

/*
    Kévin & Laurent : Menu d'inscription (post formulaire)
*/
int menuInscription(Eleve_t *eleve)
{
    int choixInscription;
    do
    {
        do
        {
            printf("\n[1] Valider"
                   "\n[2] Modifier saisie"
                   "\n[3] Afficher tous les élèves"
                   "\n[0] Quitter"
                   "\n\nQue voulez-vous faire ? ");
            scanf("%d", &choixInscription);
            if (choixInscription == 3)
            {
                introMenu("Liste élèves");
            }
            traiterChoixInscription(choixInscription, eleve);
        } while (choixInscription > 3 && choixInscription < 0);

    } while (choixInscription != CHOIX_QUITTER);
    return CHOIX_QUITTER;
}

/*
    Kévin & Laurent : Traitement du choix menuInscription
*/
void traiterChoixInscription(int choix, Eleve_t *eleve)
{
    // Traiter choix
    switch (choix)
    {
    case CHOIX_INSCRIPTION_VALIDER:
        enregistreDansListe(eleve);
        break;
    case CHOIX_INSCRIPTION_MODIFIER:
        formulaireInscriptionEleve();
        break;
    case CHOIX_AFFICHER_ELEVES:
        afficheListeEleves();
        break;
    }
}

/*
    Quentin : Formulaire de création d'une classe
*/
void formulaireCreationClasse(void)
{
    // Crée une classe et hydrate
    Classe_t *classe = nouvelleClasse(0, 0);
    introMenu("Création classe");
    // Affecte automatiquement un ID à la classe
    printf("ID Classe Courante : %d\n", classe->idClasse);
    printf("Section : ");
    classe->section = entryClasse();
    videBuffer();
    menuCreation(classe);
}

/*
    Quentin : menu création de classe
*/
int menuCreation(Classe_t *classe)
{
    int choixCreation;
    do
    {
        do
        {
            printf("\n[1] Valider"
                   "\n[2] Modifier saisie"
                   "\n[0] Quitter"
                   "\n\nQue voulez-vous faire ? ");
            scanf("%d", &choixCreation);
            traiterChoixCreation(choixCreation, classe);
        } while (choixCreation > 2 && choixCreation < 0);

    } while (choixCreation != CHOIX_QUITTER);
    return CHOIX_QUITTER;
}

/*
    Quentin : Traitement du choix menu création classe
*/
void traiterChoixCreation(int choix, Classe_t *classe)
{
    // Traiter choix
    switch (choix)
    {
    case CHOIX_INSCRIPTION_VALIDER:;
        // enregistreDansListeClasse(classe);
        // break;
    case CHOIX_INSCRIPTION_MODIFIER:;
        // formulaireCreationClasse();
        // break;
    }
}