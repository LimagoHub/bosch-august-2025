#include <iostream>

int main()
{
    int zufallszahl = 623;
    int versuch;

    do 
    {
        std::cout << "Bitte geben Sie eine Zahl zwischen 1 und 1000 ein: " << std::endl;
        std::cin >> versuch;

        if (versuch < zufallszahl) {
            std::cout << "Ihr Versuch ist zu klein " << std::endl;
        }

        if (versuch > zufallszahl)
            std::cout << "Ihr Versuch ist zu gross " << std::endl;

    } while (versuch != zufallszahl);
    std::cout << "Sie haben die Zahl geraten" << std::endl;
}

