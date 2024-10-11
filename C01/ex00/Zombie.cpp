#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::~Zombie(void) 
{
    std::cout << this->name << ": is gone" << std::endl;
}

Zombie::Zombie(std::string Name) : name(Name) {}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...";
}
