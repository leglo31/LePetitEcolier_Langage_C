# Conception

## Organisation du code

- main.c        Programme principal
    > int main(void)
- eleve.c       Code lié aux élèves
    > int idEleveCourant(void)
    > int idEleveSuivant(void)
    > Eleve_t *nouvelEleve(int idEleve, char *nom, char *prenom, int age, int anneeNaissance)
- liste_eleve.c
    > int enregistreDansListe(Eleve_t *eleve)
    > void restaureDansListe(Eleve_t *eleve)
    > void afficherEleve(void)
    > void afficheListeEleves(void)
    > int eleveBufferToFichier(char *eleveBuffer, Eleve_t *eleve)
    > int ecritureDansListe(void)
    > int lectureDansListe(void)
- classe.c      Code lié aux classes
    > int idClasseCourant(void)
    > int idClasseSuivant(void)
    > Classe_t * nouvelleClasse(int id, SectionClasse_t section)
- liste_classe.c
    > int enregistreDansListeC(Classe_t *classe)
    > void restaureDansListeC(Classe_t *classe)
    > void afficherClasse(void)
    > void afficheListeClasses(void)
    > int classeBufferToFichier(char *classeBuffer, Classe_t *classe)
    > int ecritureDansListeC(void)
    >int lectureDansListeC(void)
- menu.c        Code lié aux menus
    > void menuAccueil(void)
    > void traiterChoixAccueil(int choix)
- affichage.c   Code lié aux affichages :: utilitaires d'affichage
    > void effaceEcran(void)
    > void introMenu(char *titre)
- saisie.c
    > void pressEnter(void)
    > void videBuffer(void)
    > int entryAge(void)
    > int entryAnneeNaissance(void)
- formulaire.c  Code lié aux formulaires
    > void formulaireInscriptionEleve(void)
    > int menuInscription(Eleve_t *eleve)
    > void traiterChoixInscription(int choix, Eleve_t *eleve)