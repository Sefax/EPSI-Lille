#include <iostream>
using namespace std;

void permuter(int x, int y) // Mode lecture - passage par valeur
{
	int z;
	z = x;
	x = y;
	y = z;
}


void permuter(int *x, int *y) // Mode lecture écriture - passage par adresse
{
	int z;
	z = *x;
	*x = *y;
	*y = z;
}

void permuter(int &x, int &y) // Mode lecture écriture - passage par ref
{
	int z;
	z = x;
	x = y;
	y = z;
}


int maximum(int a, int b)
{
	if (a > b) return a;
	else return b;
}


int main()
{
	int a = 10, b = 20;
	int z;

	cout << "a = " << a << '\t' << "b = " << b << endl;
	
	cout << maximum(a, b) << endl; //Affichage
	
	z = maximum(a, b); //Affectation
	cout << z << endl; //Affichage variable
	
	if (maximum(a, 50) > 100) //Condition
		cout << "Supp a cent" << endl;
	else
		cout << "Inf a cent" << endl;

	/*permuter(&a, &b);
	cout << "a = " << a << '\t' << "b = " << b << endl;*/

	return 0;
}