/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:04:37 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/27 11:42:42 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename T>
void swap(T &param1, T &param2)
{
	T temp = param1;
	param1 = param2;
	param2 = temp;
}

template <typename T>
const T	&min(const T &param1, const T &param2)
{
	if (param1 < param2)
		return (param1);
	return (param2);
}

template <typename T>
const T	&max(const T &param1, const T &param2)
{
	if (param1 > param2)
		return (param1);
	return (param2);
}