#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "annuaire.h"
#include "affichage.h"
#include "eleve.h"

#define ANNUAIRE_TAILLEMAX 374

static Eleve_t *annuaire[ANNUAIRE_TAILLEMAX];
static int nbEleve = 0;

/*
    Retourne le nombre d'élèves inscrits dans l'annuaire
*/
int nbElevesDansAnnuaire()
{
    return nbEleve;
}

/*
    Retourne vrai s'il ne reste plus de place dans l'annuaire
*/
int estAnnuairePlein()
{
    return nbEleve >= ANNUAIRE_TAILLEMAX;
}

/*
    Ajoute un élève dans l'annuaire
    Lui attribue un nouvel identifiant vierge
    Retourne FALSE si erreur
*/
bool ajouterDansAnnuaire(Eleve_t *eleve)
{
    if (eleve == NULL)
    {
        return false;
    }

    if (nbElevesDansAnnuaire() < ANNUAIRE_TAILLEMAX)
    {
        annuaire[nbEleve] = eleve;
        nbEleve++;
        return true;
    }
    else
    {
        return false;
    }
}

/*
    Affiche tous les élèves inscrits
*/
void afficherAnnuaire(void)
{
    printf("\nDétail de l'annuaire (%d élèves):\n", nbEleve);
    for (int i = 0; i < nbEleve; i++)
    {
        printf("\n");
        afficherEleve(annuaire[i]);
    }
}

/*
    Sauvegarde l'élève à l'indice courant dans l'annuaire
*/
bool sauveDansAnnuaire()
{
    FILE *fh;
    // Id sur 5, age sur 3, code race sur 2, virgules sur 5, '\0' => 16
    // Note: La norme assure l'écriture de lignes sans souci jusqu'à 254 car.
    char ligne[TAILLE_NOM + TAILLE_PRENOM + 16];
    fh = fopen("./annuaire.txt", "w");
    if (fh == NULL)
    {
        fprintf(stderr, "Impossible d'ouvrir l'annuaire !");
        return false;
    }

    for (int i = 0; i < nbElevesDansAnnuaire(); i++)
    {
        // Fabrication de la ligne à enregistrer
        eleveToLigneFichier(ligne, annuaire[i]);
        // Ecriture dans le fichier
        fprintf(fh, "%s\n", ligne);
    }

    if (fclose(fh) != 0)
    {
        fprintf(stderr, "Impossible de fermer l'annuaire !");
        return false;
    }
    return true;
}

/*
    Crée un buffer (en une ligne) contenant toutes les informations
    d'un élève
*/
void eleveToLigneFichier(char *buffer, Eleve_t *eleve)
{
    /* int codeClasse = -1;
    if (eleve->idClasse != NULL) {
        codeChasseur = eleve->classe->id;
    }*/
    sprintf(buffer,
            "%d,%s,%s,%d,%d",
            eleve->idEleve,
            eleve->nom,
            eleve->prenom,
            eleve->age,
            eleve->anneeNaissance
            // eleve->idClasse
    );
}

/*
int lireDansAnnuaire(void)
{
    char buffer[BUFFER_SIZE];
    char fichier[] = "enfant.txt";

    FILE *fh = fopen("enfant.txt", "r");
    if (fh == NULL)
    {
        printf("Impossible d'ouvrir le fichier");
        return EXIT_FAILURE;
    }

    while (fgets(buffer, BUFFER_SIZE, fh) != NULL)
    {
        printf("%s", buffer);
    }
    fclose(fh);
    return EXIT_SUCCESS;
}*/
