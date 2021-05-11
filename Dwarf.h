#pragma once

#include "Character.h"

struct Dwarf : Character
{
    Dwarf(const std::string name_, int hp_, int armor_, int attackDamage_ = 0) : Character(hp_, armor_, attackDamage_ ), name(name_) {}
    ~Dwarf() override {}
    const std::string& getName() override;
    std::string getStats() override;
    void attack( Character& other ) override;
private:
    const std::string name;
};
