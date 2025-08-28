
#include <iostream>



int main()
{
    int feld[] = {10,2,90,3,13,1};
    int size = sizeof(feld) / sizeof(int);
    
    int max = feld[0];

    for (size_t i = 1; i < size; i++)
    {
        if (feld[i] > max) max = feld[i];
    }

    std::cout << max << std::endl ;
}

