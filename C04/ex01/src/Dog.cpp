/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:09:59 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/21 17:59:09 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog class defult constucter called!\n";
	this->brain = new Brain();
}

Dog::Dog(const Dog &src) : Animal(src) {
	std::cout << "Dog class copy constucter called!\n";
	this->brain = new Brain(*(src.brain));
}

Dog &Dog::operator=(const Dog &src) {
	std::cout << "Dog class copy assignment constucter called!\n";
	if (this != &src)
	{
		Animal::operator=(src);
		delete this->brain;
		this->brain = new Brain(*(src.brain));
	}
	return (*this);
}

// Dog a; // memory brain allocated for dog a
// Dog b; // and for b

// a = b; lets say they are not equal
// we need to delete the currect content of the a to assign it
// with new content of b.brain before creating it to avoid momory leaks

Dog::~Dog(void) {
	std::cout << "Dog class destucter called!\n";
	delete brain;
}

void Dog::makeSound() const {
	std::cout << "Bark! Bark! Bark! Bark! Bark! Bark! Bark!\n";
}

Brain *Dog::getBrain(void) const {
	return this->brain;	
}