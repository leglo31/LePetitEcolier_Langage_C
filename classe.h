#ifndef CLASSE_H
#define CLASSE_H

#define NB_CLASSES_MAX 15

// Définition de la classe
typedef enum TypeClasse
{
    CP,
    CE1,
    CE2,
    CM1,
    CM2
} TypeClasse_t;

char * listeInstit[15] = {"Mme Craie", "Mr Tableau", "Mme Correction", "Mr Effaceur", "Mr Stylo", "Mr Marker", "Mr Punition", "Mr Cartable", "Mme Colle", "Mme Pedagogue", "Mr Pedophobe", "Mme Grincheux", "Mr Atchoum", "Mme Dormeur", "Mr Prof"};

typedef struct Classe
{
    int id;
    int nbeleves;
    TypeClasse_t type;
    char * listeInstit[15];
} Classe_t;

#endif