/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:41:54 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/22 20:08:21 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string& name) : name(name)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(const Character& other)
{
	*this = other;
}

Character::~Character(void)
{
	for (int i = 0; i < size; i++)
		delete this->inventory[i];
}

Character&			Character::operator=(const Character& other)
{
	this->name = other.getName();
	this->size = 0;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		this->inventory[i] = other.inventory[i]->clone();
		if (other.inventory[i])
			this->size++;
	}
	return (*this);
}

const std::string&	Character::getName(void) const
{
	return (this->name);
}

void				Character::equip(AMateria *m)
{
	if (this->size < 4)
		this->inventory[size++] = m;
	else
		std::cout << "Couldn't equip a " << m->getType() << ", no more space" << std::endl;
}

void			Character::unequip(int idx)
{
	if (idx >= 0 && idx < this->size)
	{
		idx++;
		while (idx < this->size)
		{
			this->inventory[idx - 1] = this->inventory[idx];
			idx++;
		}
		this->size--;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < this->size)
		this->inventory[idx]->use(target);
}