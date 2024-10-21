/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 14:56:07 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/21 18:22:00 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

static void testing(void)
{
	const std::string *idea;
	{
		Cat cat;
		idea = cat.getBrain()->getIdea(1);
		if (idea == NULL)
		{
			std::cout << "Something went wrong; The range should be form 1 to 100!\n";
			return ;
		}
		else
			std::cout << cat.getType() << " " << *idea << std::endl;
		Cat cat2(cat);
		std::cout << cat.getBrain() << std::endl;
		std::cout << cat2.getBrain() << std::endl;
	}
	{
		std::cout << std::endl;
		Dog dog;
		idea = dog.getBrain()->getIdea(911);
		if (idea == NULL) {
			std::cout << "Wrong idea number. Range is from 1 to 100\n";
			return ;
		}
		else
			std::cout << dog.getType() << " " << *idea << "\n";
		Dog dog2;
		dog2 = dog;
		std::cout << dog.getBrain() << std::endl;
		std::cout << dog2.getBrain() << std::endl;
	}
}


int main(void)
{
	int		animals_num = 2;
	Animal *zoo[animals_num];
	
	for (int i = 0; i < animals_num; i++)
	{
		if (i % 2 == 0)
			zoo[i] = new Cat();
		else
			zoo[i] = new Dog();
		zoo[i]->makeSound();			
	}
	for (int i = 0; i < animals_num; i++)
		delete zoo[i];
	std::cout << std::endl;
	testing();	
	return 0;
}
