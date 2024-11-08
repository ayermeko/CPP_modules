/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:22:04 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/08 16:57:59 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

static void testing_start(void)
{
	//TODO: create a fucntion to display informative text
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Invalid number of arguments.\n";
		return 1; 
	}
	else if (argv[1] && argc == 2)
	{
		//TODO: call the convert member function
	}
	else
	{
		testing_start();
	}
	return 0;
}
