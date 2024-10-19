/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:51:23 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/19 14:27:12 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap Robot1;
	std::cout << std::endl;

	Robot1.attack("RA9");
	std::cout << std::endl;

	FragTrap Robot2(Robot1);
	std::cout << std::endl;

	Robot1.highFivesGuys();
	std::cout << std::endl;

	Robot2 = Robot1;
	std::cout << std::endl;

	Robot2.beRepaired(20);
	std::cout << std::endl;

	FragTrap Steve("Steve");
	std::cout << std::endl;

	Steve.takeDamage(900);
	std::cout << std::endl;
}