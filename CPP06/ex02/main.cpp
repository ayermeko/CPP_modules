/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:15:55 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/22 14:10:12 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "realType.hpp"

int main()
{
	Base *random;

	random = generate();
	identify(random);
	identify(*random);
	delete random;
}
