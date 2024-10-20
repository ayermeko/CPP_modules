/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 14:59:40 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/20 15:58:00 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << "Cat class defult constucter called!\n";
}

Cat::Cat(const Cat &src) : Animal(src) {
	std::cout << "Cat class copy constucter called!\n";
}

Cat &Cat::operator=(const Cat &src) {
	std::cout << "Cat class copy assignment constucter called!\n";
	Animal::operator=(src);
	return (*this);
}

Cat::~Cat(void) {
	std::cout << "Cat class destucter called!\n";
}

void Cat::makeSound() const
{
	std::cout << "Meow! Meow! Meow! Meow! Meow! Meow!\n";
}