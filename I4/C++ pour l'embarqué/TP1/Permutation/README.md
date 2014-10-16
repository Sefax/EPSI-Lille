# Cours du Jeudi 16 octobre (après-midi)

> Professeur : *M. Khalid Gaber*

> Intitulé : *C++ pour l'embarqué*

`main.cpp`

```c++
//
//  main.cpp
//  TP1 C++ pour l'embarqué
//
//  Created by Rémi Delhaye on 16/10/2014.
//  Copyright (c) 2014 Rémi Delhaye. All rights reserved.
//

#include <iostream>
using namespace std;

void permuter_mode_lecture(int x, int y)
{
    int z;
    z = x;
    x = y;
    y = z;
}

void permuter_mode_ecriture(int *x, int *y)
{
    int z;
    z = *x;
    *x = *y;
    *y = z;
}

int valeur_maximum(int x, int y)
{
    return x >= y ? x : y;
}

int main(int argc, const char * argv[])
{
    int a = 10, b = 20;
    cout << "Original \t:\t a = " << a << '\t' << "b = " << b << endl;

    permuter_mode_lecture(a, b);
    cout << "Lecture \t:\t a = " << a << '\t' << "b = " << b << endl;

    permuter_mode_ecriture(&a, &b);
    cout << "Écriture \t:\t a = " << a << '\t' << "b = " << b << endl;

    cout << endl << "Le chiffre le plus grand entre " << a << " et " << b << " est : " << valeur_maximum(a, b) << endl;
}


```
