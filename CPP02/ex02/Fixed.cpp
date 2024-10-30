/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:18:42 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/19 14:34:39 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _rawBits(0) {}

Fixed::~Fixed(void) {}

Fixed::Fixed(const Fixed &src)
{
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	if (this == &src)
		return (*this);
	this->_rawBits = src._rawBits;
	return (*this);
}

Fixed::Fixed(const int num)
{
	this->_rawBits = num << fractionalBits;
}

Fixed::Fixed(const float num)
{
	this->_rawBits = roundf(num * (1 << fractionalBits));
}

int Fixed::getRawBits(void) const
{
	return (this->_rawBits);
}

void Fixed::setRawBits(int const raw)
{
	_rawBits = raw;
}

float Fixed::toFloat(void) const 
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

bool	Fixed::operator>(const Fixed &src) const
{
	return (this->_rawBits > src._rawBits);
}

bool	Fixed::operator<(const Fixed &src) const
{
	return (this->_rawBits < src._rawBits);
}

bool	Fixed::operator>=(const Fixed &src) const
{
	return (this->_rawBits >= src._rawBits);
}

bool	Fixed::operator<=(const Fixed &src) const
{
	return (this->_rawBits <= src._rawBits);
}

bool	Fixed::operator==(const Fixed &src) const
{
	return (this->_rawBits == src._rawBits);
}

bool	Fixed::operator!=(const Fixed &src) const
{
	return (this->_rawBits != src._rawBits);
}

Fixed Fixed::operator+(const Fixed &src) const
{
	return ((Fixed)(this->toFloat() + src.toFloat()));
}

Fixed Fixed::operator-(const Fixed &src) const
{
	return ((Fixed)(this->toFloat() - src.toFloat()));
}

Fixed Fixed::operator*(const Fixed &src) const
{
	return ((Fixed)(this->toFloat() * src.toFloat()));
}

Fixed Fixed::operator/(const Fixed &src) const
{
	return ((Fixed)(this->toFloat() / src.toFloat()));
}

Fixed &Fixed::operator++(void)
{
	this->_rawBits++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->_rawBits++;
	return (temp);
}

Fixed &Fixed::operator--(void)
{
	this->_rawBits--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	this->_rawBits--;
	return (temp);
}

// Ternary operators

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return ((a < b) ? a : b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	return ((a < b) ? a : b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return ((a > b) ? a : b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	return ((a > b) ? a : b);
}
