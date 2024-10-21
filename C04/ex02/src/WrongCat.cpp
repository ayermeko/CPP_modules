/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:05:19 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/20 17:24:51 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called\n";
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
	std::cout << "WrongCat copy constructor called\n";
}

WrongCat	&WrongCat::operator=(const WrongCat &src)
{
	std::cout << "WrongCat copy assignment operator called\n";
	if (this != &src)
		WrongAnimal::operator=(src);
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called\n";
}

void	WrongCat::makeSound() const
{
	std::cout << type << ": Wrongmeow.\n";
}