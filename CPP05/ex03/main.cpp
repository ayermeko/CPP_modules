/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:27:03 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/07 13:05:15 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern someRondomIntern;
	AForm *form = someRondomIntern.makeForm("Shrubbery creation form", "Blender");
	if (form)
	{
		std::cout << *form;
		delete form;
	}
}