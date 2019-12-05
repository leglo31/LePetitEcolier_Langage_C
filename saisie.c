#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "saisie.h"
#include "eleve.h"

/*
    Quentin : Courte fonction permettant à l'utilisateur d'appuyer sur entrer
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
    Quentin : Vide le buffer en cas de saisie trop longue par rapport à ce qui était attendu
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
    Quentin : Permet la saisie de l'âge d'un élève
*/
int entryAge(void)
{
    char age[3];
    do
    {
        printf("Indiquez un âge entre 6 et 16 ans : ");
        fgets(age, 3, stdin);
    } while (atoi(age) >= AGE_MAX && atoi(age) <= AGE_MIN);
    return (int)strtol(age, NULL, 10);
}

/*
    Quentin : Permet la saisie de l'année de naissance d'un élève
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
    Quentin : Permet la saisie de l'âge d'un élève
*/
int entryClasse(void)
{
    char section[2];
    do
    {
        printf("Indiquez la section pour la classe à créer"
               "\n  [1] : CP"
               "\n  [2] : CE1"
               "\n  [3] : CE2"
               "\n  [4] : CM1"
               "\n  [5] : CM2");
        fgets(section, 2, stdin);
    } while (atoi(section) >= 1 && atoi(section) <= 5);
    return (int)strtol(section, NULL, 10);
}