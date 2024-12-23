/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 16:53:53 by ayermeko          #+#    #+#             */
/*   Updated: 2024/12/23 18:12:08 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int, char** av)
{
	try
	{
		BitcoinExchange data("data.csv");
		data.printExchangeRate(av[1]);
		for (int i = 2; av[i]; ++i)
			data.printExchangeRate(av[i]);
	}
	catch (std::exception &)
	{
		return (1);
	}
	return (0);
}