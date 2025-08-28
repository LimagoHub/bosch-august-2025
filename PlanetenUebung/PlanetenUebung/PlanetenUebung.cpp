#include <iostream>
#include <string>

struct Planet {
    std::string name;
    double masse;
    double durchmesser;
};

class Sonnensystem {
private:
    Planet planeten[9];
public:
    Sonnensystem() {
        for (int i = 0; i < 9; i++) {
            planeten[i].name = "Unbekannt";
            planeten[i].masse = -1;
            planeten[i].durchmesser = -1;
        }
    }
};

int main()
{
    
 
    Planet planeten[] = { 
        { "Merkur", 1000.0, 500.0 },
        { "Venus", 2000.0, 1500.0 },
        { "Erde", 2000.0, 1500.0 } ,
        { "Mars", 1800.0, 1500.0 } 
    };

    Sonnensystem sol;
    sol.ausgabe();

    std::cout << "Hello World!\n";
}
