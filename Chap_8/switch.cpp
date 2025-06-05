#include <iostream>

int getResult(int x, int y, char op);

int main()
{
    std::cout << "Please enter an integer: ";
    int x {};
    std::cin >> x;

    std::cout << "Please enter another integer: ";
    int y {};
    std::cin >> y;

    std::cout << "Please enter a mathematical operation: ";
    char op {};
    std::cin >> op;

    std::cout << x << " " << op << " " << y << " = " << getResult(x, y, op) << "\n";

    return 0;
}


int getResult(int x, int y, char op)
{
    switch (op)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    case '%':
        return x % y;
    default:
        std::cout << "You entered an invalid operator.\n";
    }

    return 0;
}








