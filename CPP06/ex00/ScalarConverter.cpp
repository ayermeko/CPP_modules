/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:19:23 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/08 16:56:49 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::ScalarConverter(const ScalarConverter &src) {(void)src;}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &src) {(void)src; return(*this);}

ScalarConverter::~ScalarConverter(void) {}

void ScalarConverter::convert(const std::string &value) {}
