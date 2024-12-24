/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 15:31:28 by ayermeko          #+#    #+#             */
/*   Updated: 2024/12/24 18:22:26 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <stack>

class RPN
{
	private:
		std::stack<double> stack;
		RPN();
		RPN(const RPN &);
		RPN &operator=(const RPN &);

	public:
		void performOperation(char operation);
		RPN(const std::string &expression);
		~RPN();
};