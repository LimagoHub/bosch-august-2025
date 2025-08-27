#include <iostream>

int main()
{
    unsigned int faktor1 = 3;
    unsigned int faktor2 = 4;
    unsigned long long ergebnis = 0;

    if (faktor1 > faktor2) {
        int help = faktor1;
        faktor1 = faktor2;
        faktor2 = help;
    }
    for (size_t i = 0; i < faktor1; i++)
    {
        ergebnis +=  faktor2;
    }
    std::cout << ergebnis << std::endl;
}
