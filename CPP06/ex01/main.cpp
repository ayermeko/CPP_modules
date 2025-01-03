/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:15:48 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/18 14:15:49 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data *ptr = new Data;
	uintptr_t p;

	std::cout << ptr << "\n";
	p = Serializer::serialize(ptr);
	std::cout << p << "\n";
	ptr = Serializer::deserialize(p);
	std::cout << ptr << "\n";
	delete ptr;
}