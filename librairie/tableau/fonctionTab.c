#include <stdio.h>

#define NBMAX 1000

struct tableau {
	int tab[NBMAX];
	int taille;
};
typedef struct tableau TABLEAU;

TABLEAU initialisation()
{
	TABLEAU T;
	T.taille=0;
	return T;
}

int estPlein(TABLEAU T)//a finir
{
	return 0;
}

TABLEAU insertion (TABLEAU T, int v)
{
	T.tab[T.taille] = v;
	T.taille++;
	return T;
}

void affichage(TABLEAU T)
{
	int i=0;
	int z=0;
	
	while(i<T.taille)
	{
		if(z==10)
		{
			printf("\n");
			z=0;
		}
		else
		{
			printf("%d ",T.tab[i]);
			z++;
		}
		i++;
	}
	printf("\n");
}
