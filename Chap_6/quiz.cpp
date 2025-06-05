#include <iostream>
#include <string>
#include <string_view>


std::string_view getQuantityPhrase(int n);
std::string_view getApplesPluralized(int n);

int main()
{
    constexpr int maryApples {3};
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}

std::string_view getQuantityPhrase(int n)
{
    std::string_view phrase;
    if (n > 3)
       phrase = "many ";  
    
    else if (n == 3)
        phrase = "a few ";

    else if (n == 2)
        phrase = "a couple of "; 

    else if (n == 1)
        phrase = "a single ";

    else if (n == 0)
        phrase = "no ";

    else
        phrase = "negative ";

    return phrase;

}

std::string_view getApplesPluralized(int n)
{
    return ((n > 1) ? "apples" :  "apple");
}








