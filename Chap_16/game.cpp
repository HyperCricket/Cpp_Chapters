#include <iostream>
#include <vector>

namespace Items
{

    enum Types
    {
        health_pots,
        torches,
        arrows
    };
    
    struct starter
    {
        Types item {};
        int amt {};
    };

};

std::string_view getType(Items::Types types)
{
    switch (types)
    {
        case Items::health_pots: return "health potion(s)";
        case Items::torches: return "torch(es)";
        case Items::arrows: return "arrow(s)";
        default: return "???";
    }
}

void print(const std::vector<Items::starter>& items, int n)
{
    std::cout <<  "You have " << items.at(n).amt << " " << getType(items.at(n).item) << "\n";
}

/* loop through items vector, summing up the total amount of items of each type. */
int getTotalItems(const std::vector<Items::starter>& items)
{
    int total = 0;

    for (size_t i = 0; i < items.size(); i++)
    {
        total += items.at(i).amt;
    }

    return total;
}

int main()
{
    std::vector<Items::starter> items;
    items.push_back({Items::health_pots, 1});
    items.push_back({Items::torches, 5});
    items.push_back({Items::arrows, 10});

    for (int i = 0; i < items.size(); i++)
    {
        print(items, i);
    }
    std::cout << "You have " << getTotalItems(items) << " total items.\n";

    return 0;
}
