#include <iostream>
class CWindgenerator {
private:
    unsigned int uiDrehzahl;
    
public:
    CWindgenerator() {}
    unsigned int getDrehzahl() {
        return uiDrehzahl;
    }
};
int main()
{
    std::cout << "Hello World!\n";
}

