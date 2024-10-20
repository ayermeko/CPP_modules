/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 14:56:01 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/20 17:01:01 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(const std::string &type);
		Animal(const Animal &src);
		Animal &operator=(const Animal &src);
		virtual ~Animal(void);

		std::string 	getType(void) const;
		void			setType(std::string Type);

		virtual void makeSound() const;
};
