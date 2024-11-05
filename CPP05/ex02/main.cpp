/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:27:03 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/05 16:33:36 by ayermeko         ###   ########.fr       */
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
		Bureaucrat igor("Igor", 50);
		form.beSigned(igor);
		form.execute(igor);
	}
	std::cout << std::endl;
	{
		PresidentialPardonForm form("You");
		Bureaucrat igor("Igor", 5);
		form.beSigned(igor);
		form.execute(igor);
	}
	std::cout << std::endl;
	{
		RobotomyRequestForm form("Human");
		Bureaucrat igor("Igor", 45);
		form.beSigned(igor);
		form.execute(igor);
	}
	try
	{
		ShrubberyCreationForm form("Paint");
		Bureaucrat igor("Igor", 150);
		form.beSigned(igor);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "EXCEPTION!\n";
	}
	std::cout << std::endl;
	try
	{
		ShrubberyCreationForm form("Home");
		Bureaucrat igor("Igor", 140);
		form.beSigned(igor);
		form.execute(igor);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "EXCEPTION!\n";
	}
	std::cout << std::endl;
	try
	{
		ShrubberyCreationForm form("Home");
		Bureaucrat igor("Igor", 130);
		form.execute(igor);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "EXCEPTION!\n";
	}
	std::cout << std::endl;
	try
	{
		ShrubberyCreationForm form("Home");
		Bureaucrat igor("Igor", 130);
		form.beSigned(igor);
		form.beSigned(igor);
		form.execute(igor);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "EXCEPTION!\n";
	}
	std::cout << std::endl;
	try
	{
		PresidentialPardonForm form("God");
		Bureaucrat igor("Igor", 1);
		std::cout << form;
		igor.signForm(form);
		igor.executeForm(form);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << "EXCEPTION!\n";
	}
}