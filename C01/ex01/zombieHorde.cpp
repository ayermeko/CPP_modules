/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:53:34 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/09 21:08:33 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int number, std::string Name)
{
	Zombie *horde = new Zombie[number];

	for (int i = 0; i < number; ++i)
	{
		horde[i].setName(Name);
		horde[i].announce();
	}
	return (horde);
}