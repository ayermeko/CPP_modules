#include "Weapon.hpp"

Weapon::Weapon(std::string Type) : type(Type) {}

Weapon::~Weapon(void) {}

std::string const &Weapon::getType(void)
{
    return type;
}

void Weapon::setType(std::string Type)
{
    this->type = Type;
}
