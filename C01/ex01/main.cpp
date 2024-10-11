/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:53:40 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/11 09:03:49 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie			 *horde;
	std::string		  str_input;
	int				  num_input;
	std::stringstream ss;
	
	std::cout << "Enter the numbers of zombies: ";
	std::getline(std::cin, str_input);
	ss << str_input;
	ss >> num_input;
	horde = zombieHorde(num_input, "cyril");
	delete[] horde;
	return 0;
	return 0;
}
