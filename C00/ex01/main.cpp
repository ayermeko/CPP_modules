/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:50:46 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/07 16:34:56 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook	phonebook;
	str 		command;

	std::cout << "* Welcome to PhoneBook! *\n";
	while (1)
	{
		std::cout << "Available commands: ADD, SEARCH, EXIT\n";
		std::cout << "> ";
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			
		}
		else if (command == "SEARCH")
		{
			
		}
		else if (command == "EXIT")
			break;
		else
			std::cout << "Command: " << command << " not found!\n";
	}
	return 0;
}
