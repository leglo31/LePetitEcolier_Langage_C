#ifndef ELEVE_H
#define ELEVE_H

#define TAILLE_NOM 31
#define TAILLE_PRENOM 31
/*#define AGE_MIN 3
#define AGE_MAX 15
#define AN_MIN 2005
#define AN_MAX 2017*/

typedef struct Eleve Eleve_t;

struct Eleve {
    int idEleve;
    char nom[TAILLE_NOM];
    char prenom[TAILLE_PRENOM];
    int age;
    int anneeNaissance;
    // int idClasse;
};

int idEleveCourant(void);
int idEleveSuivant(void);
Eleve_t *nouvelEleve(int idEleve, char *nom, char *prenom, int age, int anneeNaissance);
// void effacerEleve(Eleve_t * eleve);
void afficherEleve(void);

#endif