#include <iostream>

struct AdRevenue
{
    int adsWatched {};
    double percentage {}; // What percentage of users clicked on an ad.
    int avgEarnings {};
};


AdRevenue getAdRevenue()
{
    AdRevenue revenue {};
    std::cout << "Enter the number of ads watched: ";
    std::cin >> revenue.adsWatched;

    std::cout << "Enter the percentage of users who clicked on an ad (0% - 100%): ";
    std::cin >> revenue.percentage;

    std::cout << "Enter the average earnings: ";
    std::cin >> revenue.avgEarnings;

    return revenue;
}

void printAdRevenue (const AdRevenue& revenue)
{
    std::cout << "Ads Watched: " << revenue.adsWatched << "\n";
    std::cout << "Percentage: " << revenue.percentage << "\n";
    std::cout << "Average Earnings: " << revenue.avgEarnings << "\n";
    std::cout << "Total Earnings: " << static_cast<double>(revenue.adsWatched) * revenue.percentage * static_cast<double>(revenue.avgEarnings) << "\n";
}

int main()
{
    AdRevenue revenue {getAdRevenue()};
    printAdRevenue(revenue);

    return 0;
}













