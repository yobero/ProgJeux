#define NBMAX 1000

struct tableau {
	tab[NBMAX];
	int taille;
};
typedef struct tableau TABLEAU;

TABLEAU triSelection(TABLEAU T)
{
	int i=0;//deplacement dans le tableau
	int min = i;//l'indice contenatn la plus petite valeur
	int n=0;//nb d'élément trié
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
		tmp=T.tab[n];
		T.tab[n]= T.tab[min];
		T.tab[min] = tmp;
		n++;
		i=n;
	}
	return T;
}
