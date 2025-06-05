#include <iostream>

int main()
{
    int end {};
    std::cout << "Enter an integer: ";
    std::cin >> end;

    for (int i = 1; i <= end; i++)
    {
        if (i % 3 == 0)
        {
            std::cout << "fizz";
        }

        if (i % 5 == 0)
        {
            std::cout << "buzz";
        }

        if (i % 7 == 0)
        {
            std::cout << "pop";
        }

        if (i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
        {
            std::cout << i;
        }

        std::cout << "\n";
    }

    return 0;
}
