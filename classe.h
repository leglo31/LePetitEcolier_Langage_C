#ifndef CLASSE_H
#define CLASSE_H

typedef enum SectionClasse {
    CP, CE1, CE2, CM1, CM2
} SectionClasse_t;

typedef struct Classe {
    int idClasse;
    SectionClasse_t section;
} Classe_t;

int idClasseCourant(void);
int idClasseSuivant(void);
Classe_t * nouvelleClasse(int id, SectionClasse_t section);

#endif