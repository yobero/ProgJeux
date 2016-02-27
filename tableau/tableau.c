#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../librairie/tableau/tri-tableau.h"

#define N 100
#define NB 5

int alea ()
{
	int valeur;
		valeur=rand()%N;
		return valeur;
}

TABLEAU insertionTab (TABLEAU T)
{
	int a=0;
	int b;
	
	while(a<NB)
	{
		b = alea();
		T= insertion(T,b);
		a++;
	}
	
	return T;
}

int main ()
{
	srand(time(NULL));
	TABLEAU T;
	T=initialisation();
	T=insertionTab(T);
	affichage(T);
	printf("apres \n");
	T=triSelection(T);
	//T=triInsertion(T);
	affichage(T);
	
	return 0;
}
