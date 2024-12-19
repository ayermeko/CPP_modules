/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:40:15 by ayermeko          #+#    #+#             */
/*   Updated: 2024/12/19 17:12:50 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	try
	{
		std::vector<int> numbers;
		numbers.push_back(1);
		numbers.push_back(3);
		numbers.push_back(6);
		numbers.push_back(4);
		numbers.push_back(2);

		std::vector<int>::iterator it = easyfind(numbers, 6);
		std::cout << "Element found: " << *it << "\n";
		it = easyfind(numbers, 7777);
		std::cout << "Element found: " << *it << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::list<int> numbers;
		numbers.push_back(1);
		numbers.push_back(3);
		numbers.push_back(6);
		numbers.push_back(4);
		numbers.push_back(2);

		std::list<int>::iterator it = easyfind(numbers, 4);
		std::cout << "Element found: " << *it << "\n";
		it = easyfind(numbers, 7777);
		std::cout << "Element found: " << *it << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
