/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 21:27:45 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/11 09:08:17 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*str_ptr = &str;
	std::string	&str_ref = str;

	std::cout << "Address: " << &str << std::endl;
	std::cout << "Address: " << str_ptr << std::endl;
	std::cout << "Address: " << &str_ref << std::endl;
	std::cout << "Value: " << str << std::endl;
	std::cout << "Value: " << *str_ptr << std::endl;
	std::cout << "Value: " << str_ref << std::endl;
	return (0);
}