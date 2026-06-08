#include <iostream>
#include "calc.h"

int main()
{
    int a = 20;
    int b = 10;

    std::cout << "a = " << a << ", b = " << b << std::endl;

    std::cout << "add(a, b) = " << add(a, b) << std::endl;
    std::cout << "dif(a, b) = " << dif(a, b) << std::endl;
    std::cout << "mul(a, b) = " << mul(a, b) << std::endl;
    std::cout << "div(a, b) = " << div_1(a, b) << std::endl;

    return 0;
}