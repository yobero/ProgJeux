#define NBMAX 1000

struct tableau {
	int tab[NBMAX];
	int taille;
};
typedef struct tableau TABLEAU;

TABLEAU initialisation();

int estPlein(TABLEAU T);

TABLEAU insertion (TABLEAU T, int v);

void affichage(TABLEAU T);


