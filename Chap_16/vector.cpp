#include <iostream>
#include <vector>

template <typename T>
void printElement(const std::vector<T>& vec, const int n)
{
    if (n >= vec.size() || n < 0)
    {
        std::cout << "Invalid index\n";
    }

    else
    {
        std::cout << "The element has value " << vec.at(n) << "\n";
    }

}

int main()
{   
    std::vector vec {1, 4, 9, 16, 25};
    std::vector<double> vec_2(365);
    std::vector<int> nums (3);
//    std::cout << "Enter 3 integers: ";
//    std::cin >> nums[0];
//    std::cin >> nums[1];
//    std::cin >> nums[2];
//
//    std::cout << "The sum is: " << nums[0] + nums[1] + nums[2] << "\n";
//    std::cout << "The product is: " << nums[0] * nums[1] * nums[2] <<  "\n";
//    std::vector word {'h', 'e', 'l', 'l', 'o'};
//    std::cout << word.size() << "\n";
//    std::cout << word[0] << word.at(0) << "\n";
//
    std::vector v1 { 0, 1, 2, 3, 4 };
    printElement(v1, 2);
    printElement(v1, 5);

    std::vector v2 { 1.1, 2.2, 3.3 };
    printElement(v2, 0);
    printElement(v2, -1);
    return 0;
}
