/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:45:18 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/22 20:59:30 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(const Cure &src)
{
	*this = src;
}

Cure::~Cure(void) {}

AMateria* Cure::clone() const
{
	return (new Cure());
}