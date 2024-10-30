/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:16:24 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/11 13:16:12 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl	h;
	if (argc != 2)
	{
		std::cerr << "Enter: ./harl <level>\n"; 
		return (1);
	}
	h.complain(argv[1]);
	return (0);
}