#include <iostream>


constexpr bool isEven(int n);


int main()
{
    int x {};
    std::cout << "Enter an integer: ";
    std::cin >> x;

    if (isEven(x))
        std::cout << x << " is Even.\n";
    else
        std::cout << x << " is Odd.\n";

    return 0;
}

constexpr bool isEven(int n)
{
    return n % 2 == 0;
}
















