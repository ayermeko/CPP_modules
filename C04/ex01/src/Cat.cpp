/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 14:59:40 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/21 17:47:34 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << "Cat class defult constucter called!\n";
	this->brain = new Brain();
}

Cat::Cat(const Cat &src) : Animal(src) {
	std::cout << "Cat class copy constucter called!\n";
	brain = new Brain(*(src.brain));
}

Cat &Cat::operator=(const Cat &src) {
	std::cout << "Cat class copy assignment constucter called!\n";
	if (this != &src)
	{
		Animal::operator=(src);
		delete this->brain;
		this->brain = new Brain(*(src.brain));
	}
	return (*this);
}

Cat::~Cat(void) {
	std::cout << "Cat class destucter called!\n";
	delete brain;
}

void Cat::makeSound() const {
	std::cout << "Meow! Meow! Meow! Meow! Meow! Meow!\n";
}

Brain *Cat::getBrain(void) const {
	return this->brain;	
}