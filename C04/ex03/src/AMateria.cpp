/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:28:11 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/23 21:28:13 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

//////Construct

AMateria::AMateria(std::string const & type) : type(type), isTaken(false) {}

AMateria::~AMateria(void) {}


//////////////////////////// Functions

std::string const & AMateria::getType() const
{
	return (this->type);
}

bool AMateria::getIsTaken() const
{
	return (this->isTaken);
}

void AMateria::setIsTaken()
{
	this->isTaken = true;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}

////////// operators

AMateria &AMateria::operator=(const AMateria &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}
