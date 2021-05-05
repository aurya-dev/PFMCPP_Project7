#include "Dwarf.h"

//Dwarf::Dwarf

//Dwarf::getName

//Dwarf::getStats

const std::string& Dwarf::getName() {
    return name;
}

std::string Dwarf::getStats() 
{
    return Character::getStats();;
}


void Dwarf::attack( Character& other ) 
{
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
        
}
