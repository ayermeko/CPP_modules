/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:52:01 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/07 12:34:57 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class AForm;

class Intern
{
	private:
		static AForm* createShrubberyForm(const std::string &target);
		static AForm* createRobotomyForm(const std::string &target);
		static AForm* createPresidentialPardonForm(const std::string &target);
		
	public:
		Intern(void);
		Intern(const Intern &src);
		Intern &operator=(const Intern &src);
		~Intern(void);

		AForm *makeForm(const std::string &name, const std::string &target);
};
