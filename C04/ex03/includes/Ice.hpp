/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:27:45 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/23 21:32:21 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice &src);
		virtual ~Ice();
		Ice	&operator=(const AMateria &src);
		Ice	&operator=(const Ice &src);

		AMateria *clone(void) const;
		void use(ICharacter &target);
};
