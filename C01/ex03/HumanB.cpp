#include "HumanB.hpp"

HumanB::HumanB(std::string Name) : name(Name) 
{
    this->weapon = NULL;
}

HumanB::~HumanB(void) {}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack(void)
{
    if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " has no weapon\n";
}
