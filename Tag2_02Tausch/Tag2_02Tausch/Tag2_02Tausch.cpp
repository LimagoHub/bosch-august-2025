
#include <iostream>

int main()
{
    int a = 10;
    int b = 20;
    std::cout << "A = " << a << ", B = " << b << std::endl;

    int help = a;
    a = b;
    b = help;
    std::cout << "A = " << a << ", B = " << b << std::endl;

    
}

