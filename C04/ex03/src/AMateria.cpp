/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:05:32 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/23 09:26:56 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {}

AMateria::AMateria(std::string const &type) : type(type) {}

AMateria::~AMateria(void) {}

std::string const &AMateria::getType() const
{
    return (this->type);
}

void AMateria::use(ICharacter &target) {
    (void)target;
}
