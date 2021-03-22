#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "saisie.h"
#include "eleve.h"

/*
    Laurent : Courte fonction permettant à l'utilisateur d'appuyer sur entrer
    pour continuer sa navigation dans le programme
*/
void pressEnter(void)
{
    // char enter = 0;
    printf("\n\nAppuyer sur ENTREE pour continuer");
    do {
        getchar();
    } while (getchar() != '\n');
}

/*
    Laurent : Vide le buffer en cas de saisie trop longue par rapport à ce qui était attendu
*/
void videBuffer(void)
{
    int c = 0;
    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
}

/*
    Laurent : Permet la saisie de l'âge d'un élève
*/
int entryAge(void)
{
    char age[3];
    do
    {
        fgets(age, 3, stdin);
    } while (atoi(age) >= AGE_MAX && atoi(age) <= AGE_MIN);
    return (int)strtol(age, NULL, 10);
}

/*
    Laurent : Permet la saisie de l'année de naissance d'un élève
*/
int entryAnneeNaissance(void)
{
    char annee[5];
    do
    {
        fgets(annee, 5, stdin);
    } while (atoi(annee) >= AN_MAX && atoi(annee) <= AN_MIN);
    return (int)strtol(annee, NULL, 10);
}

/*
    Laurent : Permet la saisie de la classe d'un élève
*/
int entryClasse(void)
{
    char section[3];
    do
    {
        fgets(section, 3, stdin);
    } while (atoi(section) >= 1 && atoi(section) <= 15);
    return (int)strtol(section, NULL, 10);
}

/*
    Laurent : Permet la saisie recherche par nom & prénom
*/
