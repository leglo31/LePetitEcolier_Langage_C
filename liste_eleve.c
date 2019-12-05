#include <stdio.h>
#include <stdlib.h>

#include "liste_eleve.h"
#include "affichage.h"
#include "saisie.h"
#include "eleve.h"

/*
    Quentin : liste est un tableau de pointeurs d'élèves
    static indique que la variable est globale au fichier source et non à tout le code
*/
static Eleve_t *liste[NB_ELEVES_MAX];

/*
    Kevin & Quentin : Valide l'inscription, inscrit l'élève en mémoire et dans le fichier de sauvegarde
*/
int enregistreDansListe(Eleve_t *eleve)
{
    introMenu("Validation inscription");
    printf("\nInscription validée, l'enfant %s %s a pour ID %d !\n", eleve->nom, eleve->prenom, eleve->idEleve);
    liste[idEleveCourant()] = eleve;
    ecritureDansListe();
    return EXIT_SUCCESS;
}

void restaureDansListe(Eleve_t *eleve)
{
    int i = idEleveCourant();
    liste[i] = eleve;
    i++;
}

/*
    Quentin : Afficher un élève selon l'ID fournie par l'utilisateur
*/
void afficherEleve(void)
{
    introMenu("Affichage Eleve");
    int idChoix;
    printf("Veuillez indiquer l'identifiant de l'enfant que vous souhaitez afficher : ");
    scanf("%d", &idChoix);
    printf("\nID     : %d"
           "\nNom    : %s"
           "\nPrénom : %s"
           "\nAge    : %d"
           "\nAnnée de naissance : %d",
           liste[idChoix]->idEleve, liste[idChoix]->nom, liste[idChoix]->prenom,
           liste[idChoix]->age, liste[idChoix]->anneeNaissance);
    pressEnter();
}

/*
    Kevin & Quentin : Affiche la liste des élèves inscrits
*/
void afficheListeEleves(void)
{
    introMenu("Afficher Ecole");
    int eleveCount = idEleveCourant();
    for (int i = 1; i <= eleveCount; i++)
    {
        printf("\nID     : %d"
               "\nNom    : %s"
               "\nPrénom : %s"
               "\nAge    : %d"
               "\nAnnée de naissance : %d\n",
               liste[i]->idEleve, liste[i]->nom, liste[i]->prenom,
               liste[i]->age, liste[i]->anneeNaissance);
    }
    pressEnter();
}

/*
    Quentin : crée un buffer, une chaine de caractère,
    incluant tous les détails d'un élève séparés par
    un espace, afin de les sauvegarder en txt
*/
int eleveBufferToFichier(char *eleveBuffer, Eleve_t *eleve)
{
    sprintf(eleveBuffer,
            "%d %s %s %d %d\n",
            eleve->idEleve,
            eleve->nom,
            eleve->prenom,
            eleve->age,
            eleve->anneeNaissance
            // eleve->idClasse
    );
    return EXIT_SUCCESS;
}

/*
    Kevin & Quentin : écriture dans un fichier txt le buffer élève
*/
int ecritureDansListe(void)
{
    FILE *f;
    // Limite : 3 pour l'ID, 62 pour Nom/Prénom, 2 pour l'âge, 4 pour l'année de naissance, 1 pour le retour à la ligne, 5 espaces (77)
    char ligne[TAILLE_LIGNE_INFOS_ELEVE];
    int eleveCount = idEleveCourant();
    f = fopen("./liste_eleves.txt", "ab");
    if (f == NULL)
    {
        printf("\nErreur ecritureDansListe : impossible d'ouvrir ./liste_eleves.txt\n");
        return EXIT_FAILURE;
    }

    eleveBufferToFichier(ligne, liste[eleveCount]);
    fprintf(f, "%s", ligne);

    fclose(f);
    return EXIT_SUCCESS;
}

/*
    Quentin : lecture de la liste par flux
*/
int lectureDansListe(void)
{
    FILE *f;
    // Une ligne a été définie comme une chaîne de 77 caractères maximum à l'écriture
    char ligne[TAILLE_LIGNE_INFOS_ELEVE];

    // Ouverture du fichier txt
    f = fopen("./liste_eleves.txt", "rt");
    if (f == NULL)
    {
        fprintf(stderr, "erreur lectureDansListe, liste vide ?");
        return EXIT_FAILURE;
    }

    // Tant que le fichier ne contient pas de ligne vide
    while (fgets(ligne, sizeof ligne, f) != NULL)
    {
        // Alloue de la mémoire pour une struct élève temporaire
        Eleve_t *elevetemp = (Eleve_t *)malloc(sizeof(Eleve_t));
        // Récupère les informations dans le fichier .txt
        // Note : fgets lit ligne par ligne
        // Note : scanf et ses dérivés considèrent les espaces comme des séparateurs
        sscanf(ligne, "%d%s%s%d%d", &(elevetemp->idEleve), elevetemp->nom, elevetemp->prenom,
               &(elevetemp->age), &(elevetemp->anneeNaissance));
        // Affiche lesdites informations
        // printf("id %d, nom %s, prenom %s, age %d, annee %d\n", elevetemp->idEleve, elevetemp->nom, elevetemp->prenom,
        // elevetemp->age, elevetemp->anneeNaissance);
        nouvelEleve(elevetemp->idEleve, elevetemp->nom, elevetemp->prenom,
                    elevetemp->age, elevetemp->anneeNaissance);
        restaureDansListe(elevetemp);
    }
    // Fermeture du fichier txt
    fclose(f);
    return EXIT_SUCCESS;
}
