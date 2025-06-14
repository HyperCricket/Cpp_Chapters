#include "Random.h"
#include <iostream>
#include <string_view>

enum maxMonsterTypes
{
    MonsterType
};

class Monster
{
    public:
        enum Type
        {
            dragon,
            goblin,
            ogre,
            orc,
            skeleton,
            troll,
            vampire,
            zombie
        };
        
    private:
        Type m_type {};
        std::string m_name {};
        std::string m_roar {};
        int m_health {};
    
   public:
        Monster(Type type, std::string_view name, std::string_view roar, int health)
            : m_type {type}, m_name {name}, m_roar {roar}, m_health {health}
        {
        }
        
        std::string_view getTypeString(Type type) const
        {
            switch (type)
            {
                case dragon: return "dragon";
                case goblin: return "goblin";
                case ogre: return "ogre";
                case orc: return "orc";
                case skeleton: return "skeleton";
                case troll: return "troll";
                case vampire: return "vampire";
                case zombie: return "zombie";
                default: return "???";
            }
        }
        
        void print() const
        {
            if (m_health <= 0)
            {
                std::cout << m_name << " the " << getTypeString(m_type) << " is dead.\n";
            }
            else
            {
                std::cout << m_name << " the " << getTypeString(m_type) << " has " << m_health << " health points and says " << m_roar << ".\n";
            }
        }
};

namespace MonsterGenerator
{
    Monster::Type getType(int n)
    {
        switch (n)
        {
            case 0: return Monster::dragon;
            case 1: return Monster::goblin;
            case 2: return Monster::ogre;
            case 3: return Monster::orc;
            case 4: return Monster::skeleton;
            case 5: return Monster::troll;
            default: return Monster::zombie;
        }
    }

    std::string_view getName(int n)
    {
       // takes in a num from 0 - 5 (inclusive) and return a name of my choice.
       switch (n)
       {
           case 0: return "dragon";
           case 1: return "goblin";
           case 2: return "ogre";
           case 3: return "orc";
           case 4: return "skeleton";
           case 5: return "troll";
           default: return "zombie";
       }
    }


    std::string_view getRoar(int n)
    {
        // takes in a num from 0 - 5 (inclusive) and return a roar of my choice.
       switch (n)
       {
           case 0: return "roar";
           case 1: return "hee hee";
           case 2: return "ARGGH!";
           case 3: return "grrrr...";
           case 4: return "*rattle*";
           case 5: return "trollol";
           default: return "hmmmmm";
       }
    }

    Monster generate()
    {
        return Monster{getType(Random::get(0, 6)), getName(Random::get(0, 6)), getRoar(Random::get(0, 6)), Random::get(1, 100)};
    }
    

};

int main()
{
    Monster skeleton{ Monster::skeleton, "Bones", "*rattle*", 4 };
	skeleton.print();

	Monster vampire{ Monster::vampire, "Nibblez", "*hiss*", 0 };
	vampire.print();
    
    Monster m{ MonsterGenerator::generate() };
	m.print();

    return 0;
}
