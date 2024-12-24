/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 15:31:25 by ayermeko          #+#    #+#             */
/*   Updated: 2024/12/24 18:23:29 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rpn.hpp"

RPN::RPN() {}
RPN::RPN(const RPN &) {}
RPN &RPN::operator=(const RPN &) {return (*this);}
RPN::~RPN() {}

void RPN::performOperation(char operation)
{
    if (stack.size() < 2)
        throw std::invalid_argument("Error: not enough digits in stack.\n");

    double second = stack.top();
    stack.pop();
    double first = stack.top();
    stack.pop();

    switch (operation) {
    case '+':
        stack.push(first + second);
        break;
    case '-':
        stack.push(first - second);
        break;
    case '*':
        stack.push(first * second);
        break;
    case '/':
        if (second == 0)
            throw std::invalid_argument("Error: division by zero.\n");
        stack.push(first / second);
        break;
    default:
        throw std::invalid_argument("Error: unknown operation.\n");
    }
}


RPN::RPN(const std::string &expression)
{
	for (int i = 0; expression[i]; ++i)
	{
		if (isspace(expression[i]))
			continue;
		else if (isdigit(expression[i]))
			stack.push(expression[i] - '0');
		else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/')
			performOperation(expression[i]);
		else
		{
			std::cerr << "Error: unknown symbol: " << expression[i] << "\n";
			throw std::invalid_argument("");
		}
	}
	if (stack.size() == 1)
		std::cout << "Result: " << stack.top() << std::endl;
	else if (stack.size() > 1)
		throw std::invalid_argument("Error: not all digits used.\n");
	else
		throw std::invalid_argument("Error: no digits in stack.\n");
}