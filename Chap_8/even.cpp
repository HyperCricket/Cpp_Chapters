#include <iostream>

void printEven(int start, int stop);

int main()
{
    int start {};
    std::cout << "Enter a starting number: ";
    std::cin >> start;

    int end {};
    std::cout << "Enter an ending number: ";
    std::cin >> end;

    printEven(start, end);

    return 0;
}

void printEven(int start, int stop)
{
    for (int i = start; i <= stop; i++)
    {
        if (i % 2 == 0)
        {
            std::cout << i << " ";
        }
    }

    std::cout << "\n";
}












