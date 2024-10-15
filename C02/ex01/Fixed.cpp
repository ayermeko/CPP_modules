/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:06:09 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/15 22:44:01 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _rawBits(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called\n";
	_rawBits = num * 256;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called\n";
	_rawBits = roundf(num * (1 << fractionalBits));
}
Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called\n";
	if (this == &src)
		return (*this);
	this->_rawBits = src._rawBits;
	return (*this);
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called\n";
	*this = src;
}

int Fixed::toInt(void) const
{
	return (_rawBits >> fractionalBits);
}

float	Fixed::toFloat(void) const
{
	return ((float)_rawBits / (1 << fractionalBits));
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	_rawBits = raw;
}