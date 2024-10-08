/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:51:08 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/08 14:55:56 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->id = 0;
}

PhoneBook::~PhoneBook(void)
{
}

str PhoneBook::input(const str& field_name)
{
	str input;

	while (input.empty())
	{
		std::cout << field_name << ": ";
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << field_name << " can't be empty.\n";
	}
	return (input);
}

void PhoneBook::add(void)
{
	std::cout << "Please enter:\n";
	str		first_name = input("First name");
	str 	last_name = input("Last name");
	str 	nick_name = input("Nickname");
	str 	phone_number = input("Phone number");
	str 	secret = input("Darkest Secret");

	this->contacts[this->id % MAX_CONTACTS] = Contact(first_name, last_name, nick_name, phone_number, secret);
	std::cout << "Contact saved.\n";
	this->id++;
}

void PhoneBook::printTable(void)
{
	std::cout << "        id|first name| last name|  nickname" << std::endl;
	for (int i = 0; i < this->id && i < MAX_CONTACTS; i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << Contact::formatWidth(this->contacts[i].get_first_name()) << "|";
		std::cout << std::setw(10) << Contact::formatWidth(this->contacts[i].get_last_name()) << "|";
		std::cout << std::setw(10) << Contact::formatWidth(this->contacts[i].get_nickname()) << "\n";
	}
}

void PhoneBook::search(void)
{
	str id;

	if (this->id == 0)
	{
		std::cout << "No contacts.\n";
		return ;
	}
	this->printTable();
	while (1)
	{
		std::cout << "Select a contact id or press ENTER to return:\n";
		std::getline(std::cin, id);
		if (id.empty())
			return ;
		if (id.length() > (MAX_CONTACTS / 10) + 1 || id[0] < '0' || id[0] > '7' || id[0] - '0' >= this->id)
			std::cout << "Invalid id. Try again!";
		else
			this->contacts[id[0] - '0'].printContact();
			this->printTable();
	}
}