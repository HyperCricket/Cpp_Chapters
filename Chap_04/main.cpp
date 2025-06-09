#include <iostream>
/*
    Write the following program: The user is asked to enter 2 fp numbers (use doubles).
    The user is then asked to enter one of the following mathematical symbols: +, -, * or /.
    The program computes the answer on the two numbers the user entered and prints 
    the results. If the user enters an invalid symbol, the program should print nothing.

    Ex:
    Enter a double value: 6.2
    Enter a double value: 5
    Enter +, -, *, or /: *
    6.2 * 5 is 31
*/

void getNums();
void prompt(double x, double y);

int main()
{
    getNums();
    return 0;
}

void getNums()
{
    double x {};
    double y {};

    std::cout << "Enter a double value: ";
    std::cin >> x;

    std::cout << "Enter a double value: ";
    std::cin >> y;
    
    prompt(x, y);
}



void prompt(double x, double y)
{
    char op {};
    std::cout << "Enter +, -, *, or /: ";
    std::cin >> op;
    
    double result {};
    if (op == '+')
    {
        result = x + y;
    }

    else if (op == '-')
    {
        result = x - y;
    }

    else if (op == '*')
    {
        result = x * y;
    }

    else if (op == '/')
    {
        result = x / y;
    }
    
    else
    {
        return;
    }

    std::cout << x << " " << op << " " << y << " is " << result << "\n";
}




