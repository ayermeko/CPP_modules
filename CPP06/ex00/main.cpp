/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:22:04 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/09 10:58:28 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

static void testing_start(void)
{
	std::cout << "=== Testing ScalarConverter::convert ===\n";

	std::cout << "\n-- Valid Integer Inputs --\n";
	ScalarConverter::convert("42");
	ScalarConverter::convert("-42");
	ScalarConverter::convert("2147483647"); // Max int
	ScalarConverter::convert("-2147483648"); // Min int

	std::cout << "\n-- Valid Float Inputs --\n";
	ScalarConverter::convert("42.0f");
	ScalarConverter::convert("-42.0f");
	ScalarConverter::convert("3.14159f");
	ScalarConverter::convert("0.0f");
	ScalarConverter::convert("-0.0f");

	std::cout << "\n-- Valid Double Inputs --\n";
	ScalarConverter::convert("42.0");
	ScalarConverter::convert("-42.0");
	ScalarConverter::convert("3.14159");
	ScalarConverter::convert("0.00000123456789");
	ScalarConverter::convert("-1234567890.123456789");

	std::cout << "\n-- Valid Char Inputs --\n";
	ScalarConverter::convert("'a'");
	ScalarConverter::convert("'Z'");
	ScalarConverter::convert("'1'");
	ScalarConverter::convert("'!'");

	std::cout << "\n-- Edge Cases --\n";
	ScalarConverter::convert("nan");  // Not a number
	ScalarConverter::convert("nanf");
	ScalarConverter::convert("inf");  // Positive infinity
	ScalarConverter::convert("-inf"); // Negative infinity
	ScalarConverter::convert("+inf");
	ScalarConverter::convert("inff");
	ScalarConverter::convert("-inff");

	std::cout << "\n-- Invalid Inputs --\n";
	ScalarConverter::convert("abcd"); // Invalid string
	ScalarConverter::convert("42.0ff"); // Invalid float literal
	ScalarConverter::convert("'ab'");  // Invalid char literal
	ScalarConverter::convert("123abc"); // Invalid mixed input
	ScalarConverter::convert("");  // Empty string

	std::cout << "\n=== End of Tests ===\n";
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Invalid number of arguments.\n";
		return 1; 
	}
	else if (argv[1] && argc == 2)
		ScalarConverter::convert(argv[1]);
	else
		testing_start();
	return 0;
}
