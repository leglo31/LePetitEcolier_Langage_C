#ifndef CLASSE_H
#define CLASSE_H

typedef struct Classe {
    int idClasse;
    int section;
} Classe_t;

int idClasseCourant(void);
int idClasseSuivant(void);
char *classeToString(int idClasse);
Classe_t *nouvelleClasse(int id, int section);

#endif