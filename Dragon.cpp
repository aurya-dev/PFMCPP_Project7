#include "Dragon.h"
#include "DragonSlayer.h"

//Dragon::Dragon

const std::string& Dragon::getName() {
    return name;
}

std::string Dragon::getStats() 
{
    //return Character::getStats();;
}

void Dragon::attack(Character &other)
{
    std::cout << name << " is attacking " << other.getName() << "!!!" << std::endl;
    if( auto* slayer = dynamic_cast<DragonSlayer*>(&other) )
    {
        //dragons can't attack dragon slayers
        slayer->defend();
    }
    else
    {
        Character::attack(other);
    }
}

//Dragon::getName

//Dragon::getStats
