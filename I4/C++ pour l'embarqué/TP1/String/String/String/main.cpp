#include "chaine.h"

int main()
{
	Chaine ch1, *ch2;

	ch1.saisie("Bonjour");
	ch1.affiche();

	ch2 = new Chaine(5);
	ch2->saisie("Toto");
	ch2->affiche();

	return 0;
}