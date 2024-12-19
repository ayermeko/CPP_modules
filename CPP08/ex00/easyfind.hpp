/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:40:09 by ayermeko          #+#    #+#             */
/*   Updated: 2024/12/19 16:41:23 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <cstdlib>
#include <ctime>
#include <exception>

class NotFoundException : public std::exception
{
	public:
		const char *what() const throw() {return ("Element not found in the container");}
};

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);

	if (it == container.end())
		throw NotFoundException();
	return (it);
}
