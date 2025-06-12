#include <iostream>

struct Fraction
{
    int numerator {};
    int denominator {};
};

// write function to read in a fraction
Fraction getFraction()
{
    Fraction frac {};
    std::cout << "Enter a numerator: ";
    std::cin >> frac.numerator;

    std::cout << "Enter a denominator: ";
    std::cin >> frac.denominator;

    return frac;
}

// write function to multiply two fractions together
Fraction multiply (const Fraction frac_1, const Fraction frac_2)
{
   return Fraction {frac_1.numerator * frac_2.numerator, frac_1.denominator * frac_2.denominator};
}

// write function that prints a fraction
void printFraction(Fraction frac)
{
    std::cout << "Your fraction multiplied together: " << frac.numerator << "/" << frac.denominator << "\n";
}

int main()
{
    Fraction frac_1 {getFraction()};
    Fraction frac_2 {getFraction()};

    Fraction mult {multiply(frac_1, frac_2)};
    printFraction(mult);

    return 0;
}
