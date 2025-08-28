#include <iostream>
#include <string>

struct Planet {
    std::string name;
    double masse;
    double durchmesser;
    void ausgabe()
    {
        std::cout << "Name=" << name << "\tMasse=" << masse << "\tDurchmesser=" << durchmesser << std::endl;
    }
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

    void ausgabe()
    {
        for (int i = 0; i < 9; i++) {
            planeten[i].ausgabe();

        }
    }

    void setPlaneten(Planet planeten[], size_t anzahlDerPlaneten)
    {
	    for (int i = 0; i < anzahlDerPlaneten; ++i)
	    {
            Sonnensystem::planeten[i] = planeten[i];
	    }
    }

    double getMasse()
    {
        double masse = 0;
        for (int i = 0; i < 9; ++i)
        {
            if (planeten[i].masse > 0) {
                masse += planeten[i].masse;
            }
        }
        return masse;
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
    sol.setPlaneten(planeten, 4);
    sol.ausgabe();

    std::cout << "Hello World!\n";
}
