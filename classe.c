#include <stdlib.h>
#include <stdio.h>

#include "eleve.h"
#include "classe.h"

// Retourne nul si pas possible

void afficher(void)
{
    if (anneeNaissance <= 2015 && anneeNaissance >= 2014)
    {

        return CP;
    }
    else if (anneeNaissance <= 2014 && anneeNaissance >= 2013)
    {

        return CE1;
    }
    else if (anneeNaissance <= 2013 && anneeNaissance >= 2012)
    {
        return CE2;
    }
    else if (anneeNaissance <= 2012 && anneeNaissance >= 2011)
    {
        return CM1;
    }
    else if (anneeNaissance <= 2011 && anneeNaissance >= 2010)
    {
        return CM2;
    }

    printf("%s", listeInstit[15]);
}