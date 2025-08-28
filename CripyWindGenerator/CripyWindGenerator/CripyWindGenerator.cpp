#include <iostream>
class CWindgenerator {
private:
    unsigned int uiDrehzahl;
    
public:
    CWindgenerator() {
        uiDrehzahl = 64;
    }
    unsigned int getDrehzahl() {
        return uiDrehzahl;
    }

    bool Drehzahl3040() {
        return uiDrehzahl <= 40 && uiDrehzahl >= 30;
    }
};
int main()
{
    CWindgenerator Windgenerator;


    std::cout << Windgenerator.Drehzahl3040() << std::endl;
}

