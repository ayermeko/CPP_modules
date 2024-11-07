/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:52:09 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/07 12:50:55 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

AForm *Intern::createShrubberyForm(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::createPresidentialPardonForm(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}

AForm *Intern::createRobotomyForm(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}

Intern::Intern(void) {}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern &Intern::operator=(const Intern &src)
{
	(void)src;
	return (*this);
}

Intern::~Intern(void) {}

AForm *Intern::makeForm(const std::string &name, const std::string &target)
{
	std::string formNames[3] = {"Shrubbery creation form", "Robotomy request form", "Presidential pardon form"};
	AForm *(*formCreators[3])(const std::string &target) = {createShrubberyForm, createRobotomyForm, createPresidentialPardonForm};

	for (int i = 0; i < 3; i++)
	{
		if (name == formNames[i])
		{
			std::cout << "Intern creates " << name << "\n";
			return (formCreators[i](target));
		}
	}
	std::cerr << "Error: Form name '" << name << "' not recognized.\n";
	std::cerr << "Avalible forms:\n";
	for (int i = 0; i < 3; i++)
		std::cerr << formNames[i] << std::endl;
	return (NULL);
}
