#include <iostream>
#include "Schwein.h"


int main()
{



    Schwein piggy{ "Miss Piggy" };
    {
        Schwein babe{ "Babe" };
    }

   //piggy.name = "Miss Piggy";
   // piggy.gewicht = 10;

    piggy.ausgabe();
    
    piggy.fuettern();

    piggy.ausgabe();
}
