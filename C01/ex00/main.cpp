#include "Zombie.hpp"

int main()
{
    Zombie *z = NULL;
    
    z = newZombie("John");
    z->announce();
    randomChump("Bob");
    randomChump("Steve");
    delete (z);
    return 0;
}
