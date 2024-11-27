/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:55:04 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/27 14:50:28 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template<typename T_array, typename T_function>
void iter(T_array *array, size_t length, T_function function)
{
	for (size_t i = 0; i < length; i++)
		function(array[i]);
}