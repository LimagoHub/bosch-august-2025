#include <iostream>

int main()
{
    const unsigned long long weltbevoelkerung = 8'000'000'000ULL;
    unsigned long long aktiveSpieler = 1ULL;
    unsigned short anzahlNachfolger = 3;
    unsigned int anzahlSchleifenDurchlaeufe = 0;

    while (weltbevoelkerung > aktiveSpieler) {
        aktiveSpieler *= anzahlNachfolger;
        anzahlSchleifenDurchlaeufe++;
    }



    std::cout << "Durchlaeufe = " << anzahlSchleifenDurchlaeufe << std::endl;
}
