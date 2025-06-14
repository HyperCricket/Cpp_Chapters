#include <iostream>
#include <string>

template <typename T, typename U, typename V>
class Triad
{
    private: 
        T m_x {};
        U m_y {};
        V m_z {};

    public: 
        // constructor
        Triad() = default;

        Triad(const T& x, const U& y, const V& z)
            : m_x {x}, m_y {y}, m_z {z}
        {
        }
        
        // getters for each member variable.
        T& first() { return m_x; }

        U& second() { return m_y; }

        V& third() { return m_z; }

        void print() const;
};

// template guide 
template <typename T, typename U, typename V>
Triad(T, U, V) -> Triad<T, U, V>;

template <typename T, typename U, typename V>
void Triad<T, U, V>::print() const
{
    std::cout << "[" << m_x << ", " << m_y << ", " << m_z << "]";
}

    

int main()
{
	Triad<int, int, int> t1{ 1, 2, 3 };
	t1.print();
	std::cout << '\n';
	std::cout << t1.first() << '\n';

	using namespace std::literals::string_literals;
	const Triad t2{ 1, 2.3, "Hello"s };
	t2.print();
	std::cout << '\n';

	return 0;
}
