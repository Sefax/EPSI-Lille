#include "chaine.h"
#include <stdio.h>

Chaine::Chaine()
{
	tab = new char[100];
	cout << "Constructeur par def" << endl;
}

Chaine::Chaine(int a)
{
	tab = new char[a];
	cout << "Constructeur spe" << endl;
}

void Chaine::saisie(char * str)
{
	strcpy_s(tab, strlen(str) + 1, str);
}