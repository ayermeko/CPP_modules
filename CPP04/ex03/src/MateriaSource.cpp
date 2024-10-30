/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:28:40 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/23 21:28:43 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->learned[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	for (int i = 0; i < 4; i++)
		this->learned[i] = NULL;
	*this = src;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->learned[i])
			delete (this->learned[i]);
}

////Func

void MateriaSource::learnMateria(AMateria *m)
{
	if (!m || m->getIsTaken())
		return (std::cout << "Materia has already been taken\n", void());
	for (int i = 0; i < 4; i++)
	{
		if (!this->learned[i])
		{
			this->learned[i] = m;
			m->setIsTaken();
			return ;
		}
	}
	m->setIsTaken();
	Floor::dropMateria(m);
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
		if (this->learned[i] && this->learned[i]->getType() == type)
			return this->learned[i]->clone();
	return (NULL);
}

///// Oper

MateriaSource	&MateriaSource::operator=(const MateriaSource &src)
{
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->learned[i])
				delete this->learned[i];
			if (src.learned[i])
				this->learned[i] = src.learned[i]->clone();
		}
	}
	return *this;
}
