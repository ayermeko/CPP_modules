/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:07:59 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/10 13:49:57 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string Name)
{
    Zombie *horde = new Zombie[N];

    for (int i = 0; i < N; ++i)
    {
        horde[i].setName(Name);
        horde[i].announce();
    }
    return (horde);
}