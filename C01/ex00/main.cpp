#include "Zombie.hpp"

int main()
{
    Zombie *z;
    
    z = newZombie("John");
    z->announce();
    randomChump("Bob");
    randomChump("Steve");
    delete z;
    return 0;
}
