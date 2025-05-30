/* Write a program that asks the user to enter a number, and then enter a second number.
 The program should tell the user what the result of adding and subtracting the two numbers is.

The output of the program should match the following (assuming inputs of 6 and 4):*/

#include <iostream>

int main()
{
    int a;
    int b;
    std::cout << "Enter the 1st number: ";
    std::cin >> a;
    std::cout << "Enter the 2nd number: ";
    std::cin >> b;
    std::cout << "The sum of " << a << " and " << b << " is: " << a + b << std::endl;
    std::cout << "The difference between " << a << " and " << b << " is: " << a - b << std::endl;
      

    return 0;
}









