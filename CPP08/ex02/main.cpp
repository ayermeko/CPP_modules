/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:40:47 by ayermeko          #+#    #+#             */
/*   Updated: 2024/12/19 16:41:03 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#define N 10


/* int main()
{
	MutantStack<int> MS;

	MS.push(1);
	MS.push(2);
	MS.push(6);
	MS.push(7);
	MS.push(8);
	MS.push(9);
	MS.push(10);

	for (MutantStack<int>::iterator it = MS.begin(); it != MS.end(); ++it)
		std::cout << *it << std::endl;
} */

int main()
{
	MutantStack<int> MS;

	MS.push(1);
	MS.push(2);
	MS.push(6);
	MS.push(7);
	MS.push(8);
	MS.push(9);
	MS.push(10);

	for (MutantStack<int>::const_iterator it = MS.begin(); it != MS.end(); ++it)
		std::cout << *it << std::endl;
}
