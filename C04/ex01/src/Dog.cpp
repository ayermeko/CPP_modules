/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:09:59 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/20 16:54:54 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog class defult constucter called!\n";
}

Dog::Dog(const Dog &src) : Animal(src) {
	std::cout << "Dog class copy constucter called!\n";
}

Dog &Dog::operator=(const Dog &src) {
	std::cout << "Dog class copy assignment constucter called!\n";
	Animal::operator=(src);
	return (*this);
}

Dog::~Dog(void) {
	std::cout << "Dog class destucter called!\n";
}

void Dog::makeSound() const {
	std::cout << "Bark! Bark! Bark! Bark! Bark! Bark! Bark!\n";
}
