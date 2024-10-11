/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:53:34 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/09 21:08:33 by ayermeko         ###   ########.fr       */
=======
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:07:59 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/10 13:49:57 by ayermeko         ###   ########.fr       */
>>>>>>> ae4401940f75b7c92f8d1bf7f82b5cfb6b81a11e
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

<<<<<<< HEAD
Zombie *zombieHorde(int number, std::string Name)
{
	Zombie *horde = new Zombie[number];

	for (int i = 0; i < number; ++i)
	{
		horde[i].setName(Name);
		horde[i].announce();
	}
	return (horde);
=======
Zombie* zombieHorde(int N, std::string Name)
{
    Zombie *horde = new Zombie[N];

    for (int i = 0; i < N; ++i)
    {
        horde[i].setName(Name);
        horde[i].announce();
    }
    return (horde);
>>>>>>> ae4401940f75b7c92f8d1bf7f82b5cfb6b81a11e
}