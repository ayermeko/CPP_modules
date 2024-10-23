/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:27:31 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/23 21:27:33 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure &src);
		virtual ~Cure();
		Cure	&operator=(const AMateria &src);
		Cure	&operator=(const Cure &src);

		AMateria *clone(void) const;
		void use(ICharacter &target);
};


#endif
