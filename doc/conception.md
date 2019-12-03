# Conception

## Organisation du code

- main.c        Programme principal
    > int main(void)
- eleve.c       Code lié aux élèves
    > int idEleveCourant(void)
    > int idEleveSuivant(int id)
    > Eleve_t *nouvelEleve(int idEleve, char *nom, char *prenom, int age, int anneeNaissance)
    > void afficherEleve(Eleve_t * eleve)
- annuaire.c    Stock les éléments élève
- classe.c      Code lié aux classes
    > void afficherClasse(void);
- date.c        Code lié aux dates
- menu.c        Code lié aux menus
    > void menuAccueil(void)
    > void traiterChoixAccueil(int choix)
- affichage.c   Code lié aux affichages :: utilitaires d'affichage
    > void effaceEcran(void);
    > void introMenu(char *titre);
    > void afficherEcole(void);
- formulaire.c  Code lié aux formulaires
    > void formulaireInscriptionEleve(void)
    > void validerInscriptionEleve(void)
    > void modifierInscriptionEleve(void)
- eleve_dao.c   Sauvegarde des élèves
- classe_dao.c  Sauvegarde des classes