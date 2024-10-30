/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:51:23 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/19 13:19:34 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap Robot1;
	std::cout << std::endl;

	Robot1.attack("RA9");
	std::cout << std::endl;

	ScavTrap Robot2(Robot1);
	std::cout << std::endl;

	Robot1.guardGate();
	std::cout << std::endl;

	Robot2 = Robot1;
	std::cout << std::endl;

	Robot2.beRepaired(20);
	std::cout << std::endl;

	ScavTrap Steve("Steve");
	std::cout << std::endl;

	Steve.takeDamage(900);
	std::cout << std::endl;

	ScavTrap *damien = new ScavTrap[6];
	damien[0] = ScavTrap("Damien");
	damien[0].guardGate();
	damien[1].guardGate();
	delete[] damien;
}