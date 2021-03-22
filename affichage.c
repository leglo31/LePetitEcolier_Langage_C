#include <stdio.h>
#include <stdlib.h>

#include "affichage.h"
#include "saisie.h"

/*
    Laurent : Utilitaires d'affichage
*/

// Efface l'écran
void effaceEcran(void)
{
    system("@cls||clear");
}

// Efface l'écran et affiche l'en-tête de la page
void introMenu(char *titre)
{
    effaceEcran();
    printf("Le Petit écolier          "
           "Gestionnaire d'élèves          "
           "%s\n\n",
           titre);
}

// Affiche WIP
void WIP(void) {
    introMenu("Work in progress");
    printf("Menu en construction, revenez plus tard !\n\n"
           "Decide to want nothing to do with my owner today. Inspect anything brought into the house i will ruin the couch\n"
           "with my claws lick master's hand at first then bite because im moody. I love cuddles i’m so hungry i’m so hungry\n"
           "but ew not for that , hunt by meowing loudly at 5am next to human slave food dispenser so x if it fits, i sits.\n"
           "Try to hold own back foot to clean it but foot reflexively kicks you in face, go into a rage and bite own foot,\n"
           "hard cat fur is the new black . Sleep in the bathroom sink make muffins, so meow meow we are 3 small kittens\n"
           "sleeping most of our time, we are around NINA EST LA PLUS BELLE, i don’t know i can’t count and somehow manage\n"
           "to catch a bird but have no idea what to do next, so play with it until it dies of shock poop on floor and\n"
           "watch human clean up see brother cat receive pets, attack out of jealousy, i show my fluffy belly but it's a trap!\n"
           "if you pet it i will tear up your hand. Mewl for food at 4am attack dog, run away and pretend to be victim\n"
           "floof tum, tickle bum, jellybean footies curly toes yet cats are cute under the bed.\n"
           "i love you right now\n");
           pressEnter();
}