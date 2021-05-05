#pragma once

#include "Character.h"

struct Dragon : public Character
{
    Dragon(const std::string& name_, int hp, int armor_, int attackDamage_ = 0) : name(name_), Character(hp, armor_, attackDamage_ ) {}
    ~Dragon() override {}
    const std::string& getName() override;
    std::string getStats() override;
    void attack(Character& other) override;

private:
    const std::string name;
};

