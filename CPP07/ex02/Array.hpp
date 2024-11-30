/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 13:17:39 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/30 13:19:53 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <exception>
#include <cstdlib>

template <typename T>
class Array
{
	private:
		T *_data;
		unsigned int _size;

	public:
		Array();
		Array(unsigned int n);
		Array(Array<T> const &src);
		Array &operator=(const Array &src);
		~Array();
		T &operator[](unsigned int index);
		const T &operator[](unsigned int index) const;
		unsigned int size() const;

};

#include "Array.tpp"