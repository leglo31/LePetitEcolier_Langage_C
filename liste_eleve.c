#include <stdio.h>
#include <stdlib.h>

#include "liste_eleve.h"
#include "affichage.h"

static Eleve_t *liste[NB_ELEVES_MAX];
int nbEleves = 0;

/*
    Quentin : Valide l'inscription, inscrit l'élève en mémoire et dans le fichier de sauvegarde
*/
int enregistreDansListe(Eleve_t *eleve)
{
    introMenu("Validation inscription");
    printf("\nInscription validée !\n");
    liste[idEleveCourant()] = eleve;
    ecritureDansListe();
    return EXIT_SUCCESS;
}

/*
    Quentin : Afficher un élève selon l'ID fournie par l'utilisateur
*/
void afficherEleve(void)
{
    introMenu("Affichage Eleve");
    char wait;
    int idChoix;
    printf("Veuillez indiquer l'identifiant de l'enfant que vous souhaitez afficher : ");
    scanf("%d", &idChoix);
    printf("ID     : %d"
           "\nNom    : %s"
           "\nPrénom : %s"
           "\nAge    : %d"
           "\nAnnée de naissance : %d",
           liste[idChoix]->idEleve, liste[idChoix]->nom, liste[idChoix]->prenom,
           liste[idChoix]->age, liste[idChoix]->anneeNaissance);
    scanf("%s", &wait);
}

/*
    Kevin & Quentin : Affiche la liste des élèves inscrits
*/
void afficheListeEleves(void)
{
    char wait;
    int eleveCount = idEleveCourant();
    for (int i = 1; i <= eleveCount; i++)
    {
        printf("\nID     : %d"
               "\nNom    : %s"
               "\nPrénom : %s"
               "\nAge    : %d"
               "\nAnnée de naissance : %d",
               liste[i]->idEleve, liste[i]->nom, liste[i]->prenom,
               liste[i]->age, liste[i]->anneeNaissance);
    }
    scanf("%s", &wait);
}

/*
    Quentin : crée un buffer, une chaine de caractère,
    incluant tous les détails d'un élève séparés par
    une virgule, afin de les sauvegarder en txt
*/
int eleveBufferToFichier(char *eleveBuffer, Eleve_t *eleve)
{
    sprintf(eleveBuffer,
            "%d,%s,%s,%d,%d",
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
    Kevin & Quentin : écrit dans un fichier txt le buffer élève
*/
int ecritureDansListe(void)
{
    FILE *f;
    char ligne[3 + TAILLE_NOM + TAILLE_PRENOM + 2 + 4 + 5 + 1];
    int eleveCount = idEleveCourant();
    f = fopen("./liste_eleves.txt", "w");
    if (f == NULL)
    {
        printf("\nErreur ecritureDansListe : impossible d'ouvrir ./liste_eleves.txt");
        return EXIT_FAILURE;
    }

    eleveBufferToFichier(ligne, liste[eleveCount]);
    fprintf(f, "%s\n", ligne);

    fclose(f);
    return EXIT_SUCCESS;
}