#include <iostream>
#include <string_view>

enum class Monster_Type
{
    ogre,
    dragon,
    orc,
    giant_spider,
    slime
};

struct Monster
{
    Monster_Type type {};
    std::string name {};
    int health {};
};

std::string_view getMonsterType(const Monster& monster)
{
    switch (monster.type)
    {
        case Monster_Type::ogre:
            return "ogre";
        case Monster_Type::dragon: 
            return "dragon";
        case Monster_Type::orc:
            return "orc";
        case Monster_Type::giant_spider:
            return "giant spider";
        case Monster_Type::slime: 
            return "slime";
        default: 
            return "???";
    }
}



void printMonster(const Monster& monster)
{
    std::cout << "This " << getMonsterType(monster) << " is named " << monster.name << " and has " << monster.health << " health.\n";
}

int main()
{
    Monster Torg {Monster_Type::ogre, "Torg", 145};
    Monster Blurp {Monster_Type::slime, "Blurp", 23};

    printMonster(Torg);
    printMonster(Blurp);

    return 0;
}







