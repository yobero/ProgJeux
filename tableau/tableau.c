#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../librairie/tri/tri-tableau.h"

#define N 100
#define NB 500

int alea ()
{
	int valeur;
		valeur=rand()%N;
		return valeur;
}

TABLEAU initialisation()
{
	TABLEAU T;
	T.taille=0;
	return T;
}

TABLEAU insertion (TABLEAU T)
{
	int a=0;
	
	while(a<NB)
	{
		T.tab[taille] = alea();
		T.taille++;
		a++;
	}
	
	return T;
}

void affichageTableau(TABLEAU T)
{
	
}

int main ()
{
	srand(time(NULL));
	TABLEAU T;
	T=initialisation();
	
	return 0;
}
