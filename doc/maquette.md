# Maquette

## Ecran Accueil

### Objectif

- Accueillir l'utilisateur
- Permettre à l'utilisateur de sortir
- Permettre
  - Afficher les informations d'un élève (en fonction de son ID)
  - Rechercher les informations d'un élève (en fonction de son Nom et Prénom)
  - Afficher une classe (en fonction de son ID)
  - Afficher école
  - Inscrire un nouvel élève (et l'assigner à une classe et un ID)
  - Modifier les informations d'un élève
  - Désinscrire un élève

### Visuel

01234567890123456789012345678901234567890123456789012345678901234567890123456789

'''
LE PETIT ECOLIER          Gestionnaire d'élèves         Accueil

Elève
  [1] Rechercher un élève par son id
  [2] Rechercher un élève par son nom et son prénom\n"
  [3] Inscrire un nouvel élève\n"
  [4] Modifier les informations d'un élève\n"
  [5] Désinscrire un élève

Classe
  [6] Afficher une classe
  [7] Créer une classe
  [8] Supprimer une classe
  [9] Afficher l'école

  [0] Quitter

  Où souhaitez-vous aller ? (choix)
'''

## Ecran RCC ELEVE PAR ID

### Objectifs

- Demander un ID élève
- Afficher les informations stockées en mémoire
- Permettre retour vers l'écran accueil

### Visuel
01234567890123456789012345678901234567890123456789012345678901234567890123456789

'''
LE PETIT ECOLIER          Gestionnaire d'élèves         Recherche élève

ID ? : (saisie id)

Elève (ID)
Nom (eleve_nom)
Prénom (eleve_prenom)
Age (age)
Né en (anneeNaissance)

Appuyer sur ENTREE pour revenir à l'accueil
'''

### Comportement
[ENTREE] Retourne à l'accueil

## Ecran RCC ELEVE PAR NOM PRENOM

### Objectifs

- Trouver un élève en fonction nom et prénom
- L'afficher
- Permettre de revenir au menu d'accueil

### Visuel

'''
LE PETIT ECOLIER          Gestionnaire d'élèves         Rechercher élève

Nom : (saisie nom)
Prénom : (saisie prénom)

Appuyer sur ENTREE pour revenir à l'accueil
'''

### Comportement
- Affiche élève si trouvé
- Affiche erreur si non trouvé

## Ecran INSCRIRE ELEVE

### Objectifs

- Afficher un formulaire d'inscription
- Enregistrer l'élève en mémoire & dans un fichier de sauvegarde
- Revenir au menu d'accueil

### Visuel

'''
LE PETIT ECOLIER          Gestionnaire d'élèves         Inscription

Nom : (saisie nom)
Prénom : (saisie prénom)
Age : (saisie age)
Année de naissance : (saisie annee)

Inscription validée !

Appuyer sur ENTREE pour revenir à l'accueil
'''

### Comportement
[1] Valider
[2] Modifier
[0] Quitter

## Ecran MODIFIER ELEVE

### Objectifs

- Demander un id élève
- Permettre de modifier son contenu
- Revenir au menu d'accueil

### Visuel

'''
LE PETIT ECOLIER          Gestionnaire d'élèves         Modifier

ID ?

Eleve (id)
Nom (nom)
Prénom (prénom)
Age (age)
Année de naissance (annee)

Souhaitez-vous le modifier (o/n) ?
'''

### Comportement
[o] Renvoyer au formulaire d'inscription
[n] Annuler et revenir à l'accueil

## Ecran DESINSCRIRE

### Objectifs

- Désinscrire un élève
- Revenir au menu d'accueil

### Visuel

'''
LE PETIT ECOLIER          Gestionnaire d'élèves         Désinscrire

ID ?

Eleve (id)
Nom (nom)
Prénom (prénom)
Age (age)
Année de naissance (annee)

Souhaitez-vous le désinscrire (o/n) ?
'''

### Comportement
[o] Supprime l'élève du fichier sauvegarde
[n] Annule et retourne à l'accueil

## Ecran AFFICHER CLASSE

### Objectifs

- Afficher une classe
- Revenir au menu d'accueil

### Visuel

'''
LE PETIT ECOLIER          Gestionnaire d'élèves         Afficher Classe

ID : (saisie idClasse)

Classe : (id)
Enseignant : (n/p enseignant)
Liste des élèves
'''

### Comportement
[1] Voir une autre classe (redemande l'id)
[0] Revenir à l'accueil

## Ecran CFREER CLASSE

### Objectifs

- Créer une classe
- Revenir au menu d'accueil

### Visuel

'''
LE PETIT ECOLIER          Gestionnaire d'élèves         Création Classe

Section : (saisie section)

Classe (ID : (id)) créée avec succès !
'''

### Comportement
[1] Créer une autre classe
[0] Revenir à l'accueil

## Ecran SUPPRIMER CLASSE

### Objectifs

- Supprimer une classe
- Revenir au menu d'accueil

### Visuel

'''
LE PETIT ECOLIER          Gestionnaire d'élèves         Supprimer Classe

Classe ID : (saisie)

Classe (id)
Affiche la classe

Êtes-vous sûr de vouloir supprimer cette classe (o/n) ?
'''

### Comportement
[o] Supprime la classe
[n] Annule et retourne à l'accueil

## Ecran AFFICHER ECOLE

### Objectifs

- Afficher toutes les classes en une seule commande
- Revenir au menu d'accueil

### Visuel

'''
LE PETIT ECOLIER          Gestionnaire d'élèves         Afficher Ecole

Classe (id)
Affiche la classe
> multiplié par le nbr de classes

Appuyer sur ENTREE pour revenir à l'accueil
'''

### Comportement
[ENTREE] Retourne à l'accueil