/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 09:53:19 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/16 19:15:48 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>
#include <cmath>

Fixed::Fixed(void) : _rawBits(0)
{
    std::cout << "Default constructor called\n";
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copy constructor called\n";
    *this = src;
}

Fixed &Fixed::operator=(const Fixed &src)
{
    std::cout << "Copy assignment operator called\n";
    if (this == &src)
        return (*this);
    this->_rawBits = src._rawBits;    
    return (*this);
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called\n";
    _rawBits = num << fractionalBits;
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called\n";
    _rawBits = roundf(num * (1 << fractionalBits));
}

float	Fixed::toFloat(void) const
{
	return ((float)_rawBits / (1 << fractionalBits));
}

int	Fixed::toInt(void) const
{
	return (_rawBits >> fractionalBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &src)
{
	out << src.toFloat();
	return (out);
}