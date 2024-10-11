#pragma once

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon *weapon;
    public:
        HumanB(std::string Name);
        ~HumanB(void);

        void setWeapon(Weapon &weapon);
        void attack(void);
};
