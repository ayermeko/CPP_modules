/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:36:06 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/21 17:26:51 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called\n";
	for (int i = 0; i < 100; i++)
	{
		std::stringstream ss;
		ss << "Brain's idea: " << (i + 1);
		ideas[i] = ss.str();
	}
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain copy constructor called\n";
	*this = src;
}

Brain &Brain::operator=(const Brain &src)
{
	std::cout << "Brain copy assignment operator called\n";
	if (this == &src)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	return (*this);		
}

Brain::~Brain(void)
{
	std::cout << "Brain destucter called!\n";
}

const std::string *Brain::getIdea(const unsigned int num) const
{
	if (num && num <= 100)
		return (&ideas[num - 1]);
	return (NULL);
}