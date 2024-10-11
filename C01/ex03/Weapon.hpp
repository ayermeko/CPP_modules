#pragma once

# include <string>
# include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string Type);
        ~Weapon(void);

        std::string const	&getType(void);
        void                setType(std::string Type);
};

