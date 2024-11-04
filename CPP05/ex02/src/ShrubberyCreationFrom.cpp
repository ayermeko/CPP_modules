/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationFrom.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:29:05 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/04 16:41:16 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationFrom.hpp"

ShrubberyCreationFrom::ShrubberyCreationFrom(void) {}

void ShrubberyCreationFrom::executeConcrete() const
{
	//TODO: ASCII trees parsing
}

ShrubberyCreationFrom::ShrubberyCreationFrom(const std::string &target) : AForm("Shrubbery creation form", target, 145, 137) {}

ShrubberyCreationFrom::ShrubberyCreationFrom(const ShrubberyCreationFrom &src) : AForm(src) {}

ShrubberyCreationFrom &ShrubberyCreationFrom::operator=(const ShrubberyCreationFrom &src)
{
	if (this != &src)
		AForm::operator=(src);
	return (*this);	
}

ShrubberyCreationFrom::~ShrubberyCreationFrom(void) {}
