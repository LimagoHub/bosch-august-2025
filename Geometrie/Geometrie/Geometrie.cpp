#include <iostream>
#include "Punkt.h"
int main()
{
    Punkt p1{ 2.9, -4.1 };
    for (size_t i = 0; i < 11; i++)
    {
        p1.rechts(0.5);
        p1.ausgabe();
    }
   
}
