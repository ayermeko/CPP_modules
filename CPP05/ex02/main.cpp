/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:27:03 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/05 16:42:45 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	std::cout << std::endl;
	{
		ShrubberyCreationForm form("Home");
		Bureaucrat alibi("alibi", 50);
		form.beSigned(alibi);
		form.execute(alibi);
	}
	std::cout << std::endl;
	{
		PresidentialPardonForm form("You");
		Bureaucrat alibi("alibi", 5);
		form.beSigned(alibi);
		form.execute(alibi);
	}
	std::cout << std::endl;
	{
		RobotomyRequestForm form("Human");
		Bureaucrat alibi("alibi", 45);
		form.beSigned(alibi);
		form.execute(alibi);
	}
	try
	{
		ShrubberyCreationForm form("Paint");
		Bureaucrat alibi("alibi", 150);
		form.beSigned(alibi);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "EXCEPTION!\n";
	}
	std::cout << std::endl;
	try
	{
		ShrubberyCreationForm form("Home");
		Bureaucrat alibi("alibi", 140);
		form.beSigned(alibi);
		form.execute(alibi);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "EXCEPTION!\n";
	}
	std::cout << std::endl;
	try
	{
		ShrubberyCreationForm form("Home");
		Bureaucrat alibi("alibi", 130);
		form.execute(alibi);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "EXCEPTION!\n";
	}
	std::cout << std::endl;
	try
	{
		ShrubberyCreationForm form("Home");
		Bureaucrat alibi("alibi", 130);
		form.beSigned(alibi);
		form.beSigned(alibi);
		form.execute(alibi);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "EXCEPTION!\n";
	}
	std::cout << std::endl;
	try
	{
		PresidentialPardonForm form("God");
		Bureaucrat alibi("alibi", 1);
		std::cout << form;
		alibi.signForm(form);
		alibi.executeForm(form);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << "EXCEPTION!\n";
	}
}