#ifndef ELEVE_H
#define ELEVE_H

#define TAILLE_NOM 31
#define TAILLE_PRENOM 31
#define AGE_MIN 6
#define AGE_MAX 16
#define AN_MIN 2003
#define AN_MAX 2014

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

#endif