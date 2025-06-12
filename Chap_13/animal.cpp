#include <iostream>
#include <string_view>

enum class Animal
{
    pig,
    chicken,
    goat,
    cat,
    dog,
    duck
};

std::string_view getAnimalName(Animal animal)
{
    switch (animal)
    {
        case Animal::pig: return "pig";
        case Animal::chicken: return "chicken";
        case Animal::goat: return "goat";
        case Animal::cat: return "cat";
        case Animal::dog: return "dog";
        case Animal::duck: return "duck";
        default: return "???";
    }
}

void printNumberOfLegs(Animal animal)
{
    switch (animal)
    {
        case Animal::pig:
        case Animal::goat:
        case Animal::cat:
        case Animal::dog:
            std::cout << "A " << getAnimalName(animal) << " has 4 legs.\n";
            break;

        case Animal::chicken:
        case Animal::duck:
            std::cout << "A " << getAnimalName(animal) << " has 2 legs.\n";
            break;

        default: 
            std::cout << "A " << getAnimalName(animal) << " has ??? legs.\n";
    }
}

int main()
{
     Animal cat {Animal::cat};
     Animal chicken {Animal::chicken};

    printNumberOfLegs(cat);
    printNumberOfLegs(chicken);

    return 0;
}


