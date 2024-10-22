/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:37:42 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/22 21:02:44 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type) {}

AMateria::~AMateria(void) {}

std::string const &AMateria::getType() const
{
	return (this->type);
}

AMateria::AMateria(void) {}