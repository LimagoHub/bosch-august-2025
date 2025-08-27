#include <iostream>
#include <string>

struct Person {
    std::string vorname;
    std::string nachname;
    std::string sprachen[3];
};

void ausgabe(double mw[], size_t size) {
    for (size_t i = 0; i < size; i++)
    {
        std::cout << mw[i] << std::endl;
    }
}

int main()
{
    Person fritz;
    fritz.vorname = "Fritz";
    fritz.nachname = "Schmitt";
    fritz.sprachen[0] = "Deutsch";
    fritz.sprachen[1] = "Englisch";
    Person franz;
    franz.vorname = "Franz";
    franz.nachname = "Mayer";
    franz.sprachen[0] = "Deutsch";
    franz.sprachen[1] = "Englisch";

    Person viele[2];

    viele[0] = fritz;
    viele[1] = franz;

    std::cout << viele[1].nachname << std::endl;








    double x;

    double messwerte[10];

    messwerte[0] = 10;// 2000 + 0 * sizeof(double)
    messwerte[1] = 20;// 2000 + 1 * sizeof(double)

    /*for (size_t i = 0; i < sizeof(messwerte) / sizeof(double); i++)
    {
        std::cout << messwerte[i] << std::endl;
    }*/

    int feld[] = { 10, 20, 30 };

    std::cout << sizeof(x) << std::endl;
    std::cout << sizeof(messwerte) << std::endl;
    ausgabe(messwerte, 10);
}

