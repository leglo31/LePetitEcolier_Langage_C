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
LE PETIT ECOLIER          Gestionnaire d'élèves         Menu d'Accueil

Affichage
  [1] Afficher élève (id)
  [2] Recherche élève (nom prénom)
  [3] Afficher classe (id)
  [4] Afficher école

Saisie
  [5] Inscrire élève
  [6] Modifier élève
  [7] Désinscrire élève

  [0] Quitter

  Où souhaitez-vous aller ? (choix)
'''

## Ecran Afficher élève

### Objectifs

- Récolter les caractéristiques d'un élève
- Retour vers l'écran accueil
- Déclencher la création du pilote (affectation d'un id)
- (+) Proposer affectation à une classe (ou auto ?)

### Visuel
01234567890123456789012345678901234567890123456789012345678901234567890123456789

'''
LE PETIT ECOLIER          Gestionnaire d'élèves         Afficher élève

Prénom : (saisie prénom)
Nom    : (saisie nom)
Age    : (saisie age)
Date de naissance (JJMMAAAA) : (saisie date)
Classe : (saisie id classe)

[1] Afficher les informations d'un autre élève
[2] Modifier les informations de l'élève

[0] Revenir à l'accueil
'''

### Comportement
[1] Nettoie l'écran puis demande d'une nouvelle saisie ID
[2] Envoie vers Modifier élève
[0] Retour au menu d'accueil

## Ecran Rechercher élève

### Objectifs

- Trouver un élève par nom et prénom
- Revenir au menu d'accueil

### Visuel

'''
LE PETIT ECOLIER          Gestionnaire d'élèves         Rechercher élève

'''

### Comportement
[1] 
[2] 
[0] 

## Ecran Afficher classe

### Objectifs

- Afficher une classe à partir de son ID
- Revenir au menu d'accueil

### Visuel

'''
LE PETIT ECOLIER          Gestionnaire d'élèves         Afficher classe

'''

### Comportement
[1] 
[2] 
[0] 

## Ecran Afficher école

### Objectifs

- Afficher toutes les classes de l'école (et tous les élèves)
- Revenir au menu d'accueil

### Visuel

'''
LE PETIT ECOLIER          Gestionnaire d'élèves         Afficher école

'''

### Comportement
[0] 

## Ecran Inscrire élève

### Objectifs

- Récolter les informations d'un élève
- Revenir au menu d'accueil

### Visuel

'''
LE PETIT ECOLIER          Gestionnaire d'élèves         Inscription élève

'''

### Comportement
[0] 

## Ecran Modifier élève

### Objectifs

- Modifier les informations d'un élève
- Revenir au menu d'accueil

### Visuel

'''
LE PETIT ECOLIER          Gestionnaire d'élèves         Modifier élève

'''

### Comportement
[0] 

## Ecran Désinscrire élève

### Objectifs

- Désinscrire un élève
- Revenir au menu d'accueil

### Visuel

'''
LE PETIT ECOLIER          Gestionnaire d'élèves         Désinscription

'''

### Comportement
[0] 