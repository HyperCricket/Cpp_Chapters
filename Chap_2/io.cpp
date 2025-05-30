#include "io.h"
#include <iostream>

int readNumber()
{
    int x {};
    std::cout << "Please enter a number: ";
    std::cin >> x;
    return x;
}


void writeAnswer(int ans)
{
    std::cout << "The sum is: " << ans << std::endl;
}












