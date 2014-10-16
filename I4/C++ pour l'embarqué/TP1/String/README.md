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
#include "chaine.h"

using namespace std;

int main(int argc, const char * argv[])
{
    Chaine mot;
    mot.Saisie("Bonjour");
    mot.Affiche();
}
```

`chaine.h`

```c++
//
//  chaine.h
//  TP1 C++ pour l'embarqué
//
//  Created by Rémi Delhaye on 16/10/2014.
//  Copyright (c) 2014 Rémi Delhaye. All rights reserved.
//

#ifndef __TP1_C___pour_l_embarque___chaine__
#define __TP1_C___pour_l_embarque___chaine__

#include <iostream>

using namespace std;

#endif /* defined(__TP1_C___pour_l_embarque___chaine__) */

class Chaine {
    private :
        char* tab;
    public :
        Chaine();
        Chaine(int);
        void Saisie(char *);
        void Affiche() { cout << tab << endl; }
//        ~Chaine();
};
```

`chaine.cpp`

```c++
//
//  chaine.cpp
//  TP1 C++ pour l'embarqué
//
//  Created by Rémi Delhaye on 16/10/2014.
//  Copyright (c) 2014 Rémi Delhaye. All rights reserved.
//

#include "chaine.h"
#include <string.h>

using namespace std;

Chaine::Chaine()
{
    tab = new char[100];
    cout << "Constructeur par défaut." << endl;
}

Chaine::Chaine(int taille)
{
    tab = new char[taille];
    cout << "Constructeur Spécialisé." << endl;
}
void Chaine::Saisie(char *s)
{
    strcpy(tab,s);
}
```
