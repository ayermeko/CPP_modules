/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:40:57 by ayermeko          #+#    #+#             */
/*   Updated: 2024/12/19 16:41:01 by ayermeko         ###   ########.fr       */
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
#include <limits>
#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator begin();
		const_iterator begin() const;
		iterator end();
		const_iterator end() const;
};

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (std::stack<T>::c.begin());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
	return (std::stack<T>::c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (std::stack<T>::c.end());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
	return (std::stack<T>::c.end());
}
