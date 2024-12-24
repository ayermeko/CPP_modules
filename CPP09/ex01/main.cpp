/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 15:25:42 by ayermeko          #+#    #+#             */
/*   Updated: 2024/12/24 16:06:27 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rpn.hpp"

int main(int ac, char **arv)
{
    if (ac != 2)
    {
        std::cerr << "Error\n";
        exit(0);
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