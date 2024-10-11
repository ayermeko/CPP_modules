/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:11:18 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/11 09:17:43 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon	club = Weapon("crude spiked club");
		HumanA	bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
    }
    {
        Weapon	club = Weapon("crude spiked club");
        HumanB	steve("Steve");
        steve.setWeapon(club);
		steve.attack();
		club.setType("some other type of club");
		steve.attack();
    }
    return 0;
}
