/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:53:23 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/11 09:08:08 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <sstream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(void);
		~Zombie(void);

		Zombie(std::string Name);
		void    announce(void);
		void	setName(std::string);
};

Zombie *zombieHorde(int number, std::string Name);
