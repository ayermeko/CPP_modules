/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:09:14 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/02 15:36:04 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try
    {
        Bureaucrat alibi("alibi", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat alibi("alibi", 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    Bureaucrat tryme("sdfsdf", 145);
    try
	{
		Bureaucrat someone("Beer", 5);
        Bureaucrat beer(someone);
        beer = tryme;
		for (;;)
		{
			std::cout << beer;
			beer.incrementGrade();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    try
	{
		Bureaucrat alibi("alibi", 100);
		Form form("Pass", 60, 150);

		std::cout << form;
		std::cout << alibi;
		form.beSigned(alibi);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << " EXCEPTION!\n";
	}
    return 0;
}
