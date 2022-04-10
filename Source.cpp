#include <iostream>
#include "Complex.h"

int main()
{
    Complex com1(4, 9);
    Complex com2(4, 5);
    Complex com3 = com2;
    com1.SetRe(10);
    std::cout << com3 << std::endl;
    com2 = com3 - com1;
    std::cout << com2 << std::endl;
    com3 = com1 + com2;
    std::cout << com3 << std::endl;
    if (com1 == com2)
        std::cout << "=" << std::endl;
    else
        std::cout << "!=" << std::endl;
    std::cout << com1 << com2;
    com3 = com1 * com2;
    com2 = com3 / com1;
    std::cout << com3 << std::endl;
    std::cout << com2 << std::endl;
    Complex com(5, 4);
    com.ComplexPow(0.3);
    std::cout << com << std::endl;
    com.Trig();

}