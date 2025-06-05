#include <iostream>

int sumTo(int n);

int main()
{
    int value {};
    std::cout << "Please enter a integer value: ";
    std::cin >> value;

    std::cout << "The sum of 1 to " << value << " is: " << sumTo(value) << "\n";
    return 0;
}

int sumTo(int n)
{
    int sum {};

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    return sum;
}

















