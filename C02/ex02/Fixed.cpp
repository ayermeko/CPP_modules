/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:42:26 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/16 20:10:45 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _rawBits(0)
{
}

Fixed::Fixed(const int num)
{
	_rawBits = num << fractionalBits;
}

Fixed::Fixed(const float num)
{
	_rawBits = roundf(num * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &src)
{
	*this = src;
}

Fixed	&Fixed::operator=(const Fixed &src)
{
	if (this != &src)
		this->_rawBits = src._rawBits;
	return (*this);
}

Fixed::~Fixed(void)
{
}

int	Fixed::getRawBits(void) const
{
	return (_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	_rawBits = raw;
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
