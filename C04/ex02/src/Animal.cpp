/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 14:56:05 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/21 22:15:45 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Defult") {
	std::cout << "Animal class defult constucter called!\n";
}

Animal::Animal(const std::string &type) : type(type) {
	std::cout << "Animal class parameterized constucter called!\n";
}

Animal::Animal(const Animal &src) {
	std::cout << "Animal class copy constructer called!\n";
	*this = src;
}

Animal &Animal::operator=(const Animal &src) {
	std::cout << "Animal class copy assignment constucter called!\n";
	if (this == &src)
		return (*this);
	this->type = src.type;
	return (*this);	
}

Animal::~Animal(void) {
	std::cout << "Animal class destcuter called!\n";
}

std::string Animal::getType(void) const {
	return (this->type);
}

void Animal::setType(std::string Type) {
	this->type = Type;
}
