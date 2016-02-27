#include "fonctionTab.h"

TABLEAU triSelection(TABLEAU T)
{
	int i=0;//deplacement dans le tableau
	int min = i;//l'indice contenant la plus petite valeur
	int n=0;//l'indice du dernier element trié
	int tmp; //variable pour faire l'échange

	while (n<=T.taille)
	{
		while (i<T.taille)//Cherhche de la plus petite valeur dans le tableau non-trié
		{
			if(T.tab[min]>T.tab[i])
				min=i;
			
			i++;
		}
			
		//échange
		if(min!=i)
		{
			tmp=T.tab[n];
			T.tab[n]= T.tab[min];
			T.tab[min] = tmp;
		}
		n++;
		i=n;
		min=i;
	}
	return T;
}

TABLEAU triInsertion(TABLEAU T)
{
	//On suppose que la valeur du premier indice du tableau est trié
	int i=2;
	int n=i-1;//taille du tableau trié
	int itmp=n;
	int tmp;
	
	while (i<T.taille)
	{
		while(T.tab[i]<= T.tab[n] && i>n) //localisation de l'insertion
			i--;
		
		//initialisation de la valeur tmp
		tmp=T.tab[itmp+1];
		while(itmp<i)
		{
			T.tab[itmp+1] = T.tab[itmp];
			itmp++;
		}
		T.tab[i] = tmp;
		
		n++;
		i=n+1;
		itmp=n;
	}
	
	return T;
}
