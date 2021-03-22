#include <stdio.h>
#include <stdlib.h>

#include "liste_classe.h"

/*
   Laurent : listeC tableau de pointeurs de classe
    static indique que la variable est globale au fichier source et non à tout le code
*/
static Classe_t *listeC[NB_CLASSES_MAX];

/*
    Laurent : Valide la création, inscrit la classe en mémoire et dans le fichier de sauvegarde
*/
int enregistreDansListeClasse(Classe_t *classe)
{
    introMenu("Validation Création");
    printf("\nCréation effectuée, la classe de section %d a pour ID %d !\n", classe->section, classe->idClasse);
    listeC[idClasseCourant()] = classe;
    appendClassList();
    return EXIT_SUCCESS;
}

/*
    Laurent : Restaure la classe
*/
void restaureDansListeClasse(Classe_t *classe)
{
    int iC = idClasseCourant();
    listeC[iC] = classe;
    iC++;
}

/*
    Laurent : Afficher une classe selon l'ID de classe fournie par l'utilisateur
*/
void showClasse(void)
{
    introMenu("Afficher Classe");
    int idChoix;
    printf("Veuillez indiquer l'identifiant de la classe que vous souhaitez afficher : ");
    scanf("%d", &idChoix);
    printf("\nID      : %d"
           "\nSection : %d",
           listeC[idChoix]->idClasse, listeC[idChoix]->section);
    pressEnter();
}

/*
    Laurent : Affiche la liste des classes
*/
void allClasses(void)
{
    introMenu("Afficher Classes");
    int classeCount = idClasseCourant();
    for (int i = 1; i <= classeCount; i++)
    {
        printf("\nID      : %d"
               "\nSection : %d",
               listeC[i]->idClasse, listeC[i]->section);
    }
    pressEnter();
}

/*
    Laurent : crée un buffer, une chaine de caractère,
    incluant tous les détails d'une classe séparés par
    un espace, afin de les sauvegarder en txt
*/
int classeBufferToFichier(char *classeBuffer, Classe_t *classe)
{
    sprintf(classeBuffer,
            "%d %d\n",
            classe->idClasse,
            classe->section);
    return EXIT_SUCCESS;
}

/*
    Laurent : écriture dans un fichier txt le buffer classe
*/
int appendClassList(void)
{
    FILE *fClasse;
    // Limite : 3 pour l'ID, 1 pour la section, 1 pour l'espace (5)
    char ligne[TAILLE_LIGNE_INFOS_CLASSE];
    int classeCount = idClasseCourant();
    fClasse = fopen("./liste_classes.txt", "ab");
    if (fClasse == NULL)
    {
        printf("\nErreur appendClassList : impossible d'ouvrir ./liste_classes.txt\n");
        return EXIT_FAILURE;
    }

    classeBufferToFichier(ligne, listeC[classeCount]);
    fprintf(fClasse, "%s", ligne);

    fclose(fClasse);
    return EXIT_SUCCESS;
}

/*
    Laurent : lecture de la listeC par flux
*/
int readClassList(void)
{
    FILE *fClasse;
    // Une ligne a été définie comme une chaîne de 5 caractères maximum à l'écriture
    // Quentin : 10 parce que je suis insecure
    char ligneC[TAILLE_LIGNE_INFOS_CLASSE];

    // Ouverture du fichier txt
    fClasse = fopen("./liste_eleves.txt", "rt");
    if (fClasse == NULL)
    {
        fprintf(stderr, "erreur lectureDansListe, liste vide ?");
        return EXIT_FAILURE;
    }

    // Tant que le fichier ne contient pas de ligne vide
    while (fgets(ligneC, sizeof ligneC, fClasse) != NULL)
    {
        // Alloue de la mémoire pour une struct classe temporaire
        Classe_t *classetemp = (Classe_t *)malloc(sizeof(Classe_t));
        // Récupère les informations dans le fichier .txt
        sscanf(ligneC, "%d%d", &(classetemp->idClasse), &(classetemp->section));
        // Affiche lesdites informations
        nouvelleClasse(classetemp->idClasse, classetemp->section);
        restaureDansListeClasse(classetemp);
    }
    // Fermeture du fichier txt
    fclose(fClasse);
    return EXIT_SUCCESS;
}
