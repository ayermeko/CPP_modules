/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:28:03 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/23 21:28:05 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "Floor.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *learned[4];

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &src);
		virtual ~MateriaSource(void);
		MateriaSource	&operator=(const MateriaSource &src);

		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const & type);
};

#endif
