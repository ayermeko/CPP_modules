/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:40:25 by ayermeko          #+#    #+#             */
/*   Updated: 2024/12/19 18:00:39 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#define N 10

int main()
{
	try
	{

	Span storage(N * 2);
	srand(static_cast<long>(time(NULL)));

	for (int i = 0; i < N; ++i)
		storage.addNumber(rand() % (N*10));
	std::cout << storage.shortestSpan() << std::endl;
	std::cout << storage.longestSpan() << std::endl;

	
	std::vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	storage.printNumbers();
	storage.addNumbers(nums.begin(), nums.end());
	storage.printNumbers();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
