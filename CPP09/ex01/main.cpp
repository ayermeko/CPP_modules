/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 15:25:42 by ayermeko          #+#    #+#             */
/*   Updated: 2024/12/24 16:13:24 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rpn.hpp"

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cerr << "Error: too few args\n";
        return (1);
    }
    try
	{
        if (ac == 2)
            RPN rpn(av[1]);
        else
        {
            std::stringstream ss;
            for (int i = 1; i < ac; ++i)
            {
                ss << av[i];
                if (i != ac - 1)
                    ss << " ";
            }
            RPN rpn(ss.str());
        }
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
		return (1);
	}
}