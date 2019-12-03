#ifndef ELEVE_H
#define ELEVE_H

#define TAILLE_NOM 31
#define TAILLE_PRENOM 31
#define AGE_MIN 3
#define AGE_MAX 15
#define AN_MIN 2005
#define AN_MAX 2017

struct Eleve {
    int idEleve;
    char nom[TAILLE_NOM];
    char prenom[TAILLE_PRENOM];
    int age;
    int anneeNaissance;
    int idClasse;

};
typedef struct Eleve Eleve_t;

// int idEleveCourant(void);
int idEleveSuivant(void);
void valeurs(Eleve_t *eleve);
Eleve_t *nouvelEleve(int idEleve, char *nom, char *prenom, int age, int anneeNaissance);
// int idWhich(void);
void afficherEleve(Eleve_t *eleve);

#endif