#include <iostream>
#include <cmath>

class Point2d
{
    private:
        double m_x {};
        double m_y {};


    public:
        Point2d()
            : Point2d(0.0, 0.0)
        {
        }

        Point2d(double x, double y)
            : m_x {x}, m_y{y}
        {
        }

        
        void print()
        {
            std::cout << "Point2d(" << m_x << ", " << m_y << ")\n";
        }
        

        double distanceTo(Point2d& point2d) const
        {
            return std::sqrt( (m_x - point2d.m_x) * (m_x - point2d.m_x) + (m_y - point2d.m_y) * (m_y - point2d.m_y) );
        }

};

int main()
{
    Point2d first{};
    Point2d second {3.0, 4.0};

    // Point2d third {4.0};

    first.print();
    second.print();
    
    std::cout << "Distance between two points: " << first.distanceTo(second) << "\n";
    return 0;
}
