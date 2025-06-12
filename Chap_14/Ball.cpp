#include <iostream>

class Ball
{
    private:
        std::string m_color {"black"};
        double m_radius {10.0};
    
    public:
        Ball (double radius)
            : Ball{"black", radius}
        {
        }

        Ball (std::string color = "black", double radius = 10.0)
            : m_color {color}, m_radius {radius}
        {
        }

        std::string_view getColor() const
        {
            return m_color;
        }

        int getRadius() const
        {
            return m_radius;
        }
};

void print(const Ball& ball)
{
    std::cout << "Ball(" << ball.getColor() << ", " << ball.getRadius() << ")\n";
}

int main()
{
    Ball def{};
    Ball blue{ "blue" };
    Ball twenty{ 20.0 };
    Ball blueTwenty{ "blue", 20.0 };

    print(def);
    print(blue);
    print(twenty);
    print(blueTwenty);

    return 0;
}
