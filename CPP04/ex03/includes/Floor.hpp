/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:27:38 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/23 21:32:04 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"

struct MateriaList
{
	AMateria	*materia;
	MateriaList	*next;
};

class Floor
{
	private:
		MateriaList	*list;

		Floor();
		Floor(const Floor &src);
		~Floor();

		Floor			&operator=(const Floor &rhs);
		void			addMateria(AMateria* materia);
		void			cleanFloor();
		static Floor	&getInstance();

	public:
		static void dropMateria(AMateria* materia);
		static void clean();
};
