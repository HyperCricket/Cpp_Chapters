#include <iostream>

class Fraction
{
    int m_numerator{ 0 };
    int m_denominator{ 1 };

    public:
        Fraction() = default;

        Fraction (int x, int y)
            : m_numerator {x}, m_denominator {y}
        {
        }

        Fraction multiply(const Fraction& f2)
        {
            return Fraction { m_numerator * f2.m_numerator, m_denominator * f2.m_denominator };
        }

        int getNumerator() const
        {
            return m_numerator;
        }

        int getDenominator() const
        {
            return m_denominator;
        }
        

};

void printFraction(const Fraction& f)
{
    std::cout << f.getNumerator() << '/' << f.getDenominator() << '\n';
}

int getNumerator()
{
    int num {};
    std::cout << "Enter a value for numerator: ";
    std::cin >> num;
    std::cout << '\n';
    return num;
}

int getDenominator()
{
    std::cout << "Enter a value for denominator: "; 
    int denom {};
    std::cin >> denom;
    std::cout << '\n';
    return denom;
}

int main()
{
    int x {getNumerator()};
    int y {getDenominator()};
    
    Fraction f1{x, y};
    
    x = getNumerator();
    y = getDenominator();
    Fraction f2{x, y};

    std::cout << "Your fractions multiplied together: ";

    printFraction(f1.multiply(f2));

    return 0;
}
