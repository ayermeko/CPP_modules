/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:22:04 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/17 18:57:28 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char *argv[])
{
	if (argv[1] && argc == 2)
		ScalarConverter::convert(argv[1]);
	else
	{
		std::cerr << "Invalid number of arguments.\n";
		return 1; 
	}
	return 0;
}
