/*
    main.c
    Application de la gestion d'une école primaire
*/
#include <stdlib.h>
#include <stdio.h>

#include "menu.h"
#include "liste_classe.h"
#include "liste_eleve.h"

int main(void)
{
    lectureDansListe();
    readClassList();
    menuAccueil();
EXIT_SUCCESS;
}