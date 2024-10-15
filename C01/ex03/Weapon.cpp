/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:23:31 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/11 13:23:32 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string Type) : type(Type) {}

Weapon::~Weapon(void) {}

std::string const &Weapon::getType(void)
{
    return type;
}

void Weapon::setType(std::string Type)
{
    this->type = Type;
}
