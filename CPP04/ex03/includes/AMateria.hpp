/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:27:11 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/23 21:31:44 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	type;
		bool		isTaken;

	public:
		AMateria(std::string const & type);
		virtual ~AMateria(void);
		virtual AMateria &operator=(const AMateria &src);

		std::string			const & getType() const;
		bool				getIsTaken() const;
		void				setIsTaken();
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};
