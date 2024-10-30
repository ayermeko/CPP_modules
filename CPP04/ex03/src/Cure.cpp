/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:28:23 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/23 21:28:25 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(const Cure &src) : AMateria(src)
{
	this->isTaken = false;
	*this = src;
}

Cure::~Cure(void) {}

// Functions

AMateria *Cure::clone(void) const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

// Operators

Cure	&Cure::operator=(const AMateria &src)
{
	(void)src;
	return (*this);
}

Cure	&Cure::operator=(const Cure &src)
{
	(void)src;
	return (*this);
}

