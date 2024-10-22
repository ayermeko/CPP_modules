/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:32:37 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/22 19:33:52 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(const Cure& other) : AMateria("cure")
{
	*this = other;
}

Cure::~Cure(void) {}

Cure&    Cure::operator=(const Cure& other)
{
	this->type = other.type;
	return (*this);
}

AMateria*       Cure::clone() const
{
	return (new Cure(*this));
}

void            Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}