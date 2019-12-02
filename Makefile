all: lePetitEcolier testEcolier

lePetitEcolier: main.o affichage.o menu.o eleve.o date.o classe.o formulaire.o eleve_dao.o classe_dao.o
	gcc -Wall -o lePetitEcolier main.o affichage.o menu.o eleve.o date.o classe.o formulaire.o eleve_dao.o classe_dao.o

testEcolier: main.o affichage.o menu.o formulaire.o eleve.o
	gcc -Wall -o testEcolier main.o affichage.o menu.o formulaire.o eleve.o

main.o: main.c
	gcc -Wall -o main.o -c main.c

affichage.o: affichage.c
	gcc -Wall -o affichage.o -c affichage.c

menu.o: menu.c
	gcc -Wall -o menu.o -c menu.c

eleve.o: eleve.c
	gcc -Wall -o eleve.o -c eleve.c

date.o: date.c
	gcc -Wall -o date.o -c date.c

classe.o: classe.c
	gcc -Wall -o classe.o -c classe.c
	
formulaire.o: formulaire.c
	gcc -Wall -o formulaire.o -c formulaire.c

eleve_dao.o: eleve_dao.c
	gcc -Wall -o eleve_dao.o -c eleve_dao.c

classe_dao.o: classe_dao.c
	gcc -Wall -o classe_dao.o -c classe_dao.c

clean:
	rm -f *.o core

mrproper: clean
	rm -f lePetitEcolier
