# Complément au cahier des charges

## Dictionnaire des données

Eleve:

- prenomEleve         31 caractères parmi A-Za-z espace tiret apostrophe
- nomEleve            31 caractères parmi A-Z espace tiret apostrophe MAJUSCULES
- ageEleve            entier entre 3 et 15 ans
- jourNaissanceEleve  2 chiffres, 1 à 31
- moisNaissanceEleve  2 chiffres, 1 à 12
- anneeNaissanceEleve 4 chiffres, 2005 à 2017
- classeAssignee      15 MAX
- idEleve             entier (1..n < 375)

Classe:

- idClasse            entier (1..k < 15)
- typeClasse          parmi la liste {CP, CE1, CE2, CM1, CM2}
- instituteurClasse   parmi la liste { x }
- elevesClasse        1 à 25 idEleve

1 eleve peut etre assigne a une classe
1 classe comporte 25 eleves max