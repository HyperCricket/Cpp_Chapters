#include <iostream>
#include <string>

/*
    Write a program that asks the user to enter their full name and their age.
    As output, tell the user the sum of their age and the number of characters
    in their name (use the std::string::length() member function to get the 
    length of the string). For simplicity, count any spaces in the name as a character.

    Sample output:

    Enter your full name: John Doe
    Enter your age: 32
    Your age + length of name is: 40
*/

int main()
{
    std::cout << "Enter your full name: ";
    std::string name {};
    std::getline(std::cin >> std::ws, name);

    int age {};
    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Your age + length of name is: " << age + name.length() << "\n";

    return 0;
}














