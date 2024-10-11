/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:03:27 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/10 13:45:42 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string str_input;
    int         int_input;
    std::stringstream ss;
    Zombie      *zombie;

    std::cout << "Enter number of zombies: ";
    std::getline(std::cin, str_input);
    ss << str_input;
    ss >> int_input;
    if (ss.fail())
        std::cerr << "Failed to create number\n";
    else
    {
        if (int_input > 99999) {
            std::cout << "Too big number. It is not safe to run it. Number decreased to 3\n";
			int_input = 3;
        }
        zombie = zombieHorde(int_input, "Zombie");
        delete [] zombie;
        return (0);
    }
    return 1;
}
