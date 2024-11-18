/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:32:33 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/18 14:15:12 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer &src) {(void)src;}

Serializer &Serializer::operator=(const Serializer &src) {(void)src; return(*this);}

Serializer::~Serializer() {}

uintptr_t Serializer::serialize(Data *ptr)
{
}

Data* Serializer::deserialize(uintptr_t raw)
{
}