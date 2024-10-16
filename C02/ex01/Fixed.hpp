#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int                 _rawBits;
        static const int    fractionalBits = 8;
    public:
        Fixed(void);
        // Fixed(const int num);
        // Fixed(const float num);
        Fixed(const Fixed &src);
        Fixed &operator=(const Fixed &src);
        ~Fixed(void);
};
