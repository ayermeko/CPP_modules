#include "HumanA.hpp"

HumanA::HumanA(std::string Name, Weapon &weapon) : name(Name), weapon(weapon) {}

HumanA::~HumanA(void) {}

void HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
