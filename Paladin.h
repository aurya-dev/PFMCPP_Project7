#pragma once

#include "Character.h"

struct Paladin : Character
{
    Paladin(const std::string name_, int hp, int armor_, int attackDamage_ = 0) : name(name_), Character(hp, armor_, attackDamage_ ) {}
    ~Paladin() override {}
    const std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
};
