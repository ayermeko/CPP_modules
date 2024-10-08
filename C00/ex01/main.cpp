/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:50:46 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/08 15:04:02 by ayermeko         ###   ########.fr       */
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
		if (!std::getline(std::cin, command))
		{
			std::cout << "\nEOF detected. Exiting...\n";
			break;
		}
		if (command == "ADD")
			phonebook.add();
		else if (command == "SEARCH")
			phonebook.search();
		else if (command == "EXIT")
			break;
		else
			std::cout << "Command: " << command << " not found!\n";
	}
	return 0;
}
