#include <iostream>
#include <string>
#include <string_view>

/*
    Write a program that asks for the name and age of two people, then prints
    which person is older.

    Sample output of program:
    Enter the name of person #1: John Bacon
    Enter the age of John Bacon: 37
    Enter the name of person #2: David Jenkins
    Enter the age of David Jenkins: 44
    David Jenkins (age 44) is older than John Bacon (age 37).

*/

int main()
{
    std::cout << "Enter the name of person #1: ";
    std::string name {};
    std::getline(std::cin >> std::ws, name);

    int age {};
    std::cout << "Enter the age of " << name << ": ";
    std::cin >> age;

    std::cout << "Enter the name of person #2: ";
    std::string name2 {};
    std::getline(std::cin >> std::ws, name2);

    int age2 {};
    std::cout << "Enter the age of " << name2 << ": ";
    std::cin >> age2;
    
    if (age > age2)
        std::cout << name << " (age " << age << ") is older than " << name2 << " (age " << age2 << ").\n";

    else if (age2 > age)
        std::cout << name2 << " (age " << age2 << ") is older than " << name << " (age " << age << ").\n";
    
    else
        std::cout << name2 << " (age " << age2 << ") is the same age as " << name << " (age " << age << ").\n";
    return 0;
}


