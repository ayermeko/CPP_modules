/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:45:22 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/22 21:03:56 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(const Ice &src)
{
	*this = src;
}

Ice::~Ice(void) {}

AMateria *Ice::clone() const
{
	return (new Ice());
}
