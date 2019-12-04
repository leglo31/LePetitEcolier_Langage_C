all: lePetitEcolier testEcolier

lePetitEcolier: main.o affichage.o menu.o formulaire.o eleve.o liste_eleve.o classe.o
	gcc -Wall -o lePetitEcolier main.o affichage.o menu.o formulaire.o eleve.o liste_eleve.o classe.o

testEcolier: main.o affichage.o menu.o formulaire.o eleve.o liste_eleve.o
	gcc -Wall -o testEcolier main.o affichage.o menu.o formulaire.o eleve.o liste_eleve.o

main.o: main.c
	gcc -Wall -o main.o -c main.c

affichage.o: affichage.c
	gcc -Wall -o affichage.o -c affichage.c

menu.o: menu.c
	gcc -Wall -o menu.o -c menu.c

eleve.o: eleve.c
	gcc -Wall -o eleve.o -c eleve.c
	
formulaire.o: formulaire.c
	gcc -Wall -o formulaire.o -c formulaire.c

liste_eleve.o: liste_eleve.c
	gcc -Wall -o liste_eleve.o -c liste_eleve.c

classe.o: classe.c
	gcc -Wall -o classe.o -c classe.c

clean:
	rm -f *.o core

mrproper: clean
	rm -f lePetitEcolier testEcolier
