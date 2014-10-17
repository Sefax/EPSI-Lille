#include <iostream>
using namespace std;

class Chaine{
private:
	char * tab;
public:
	Chaine();
	Chaine(int);

	void saisie(char *s);
	void affiche() { cout << tab << endl; };
};