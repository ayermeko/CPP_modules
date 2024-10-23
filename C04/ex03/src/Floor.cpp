/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:28:28 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/23 21:28:30 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Floor.hpp"

Floor::Floor() : list(NULL) {}

Floor::~Floor()
{
	cleanFloor();
}

/////Functions

Floor	&Floor::getInstance()
{
	static Floor instance;
	return (instance);
}

void	Floor::addMateria(AMateria *materia)
{
	MateriaList	*newMateria = new MateriaList;

	newMateria->materia = materia;
	newMateria->next = list;
	list = newMateria;
}

void	Floor::dropMateria(AMateria *materia)
{
	getInstance().addMateria(materia);
}

void	Floor::cleanFloor()
{
	MateriaList	*tmp;

	while (list)
	{
		tmp = list;
		list = list->next;
		delete tmp->materia;
		delete tmp;
	}
}

void	Floor::clean()
{
	getInstance().cleanFloor();
}
