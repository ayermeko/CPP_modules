/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:53:40 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/11 09:03:49 by ayermeko         ###   ########.fr       */
=======
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:03:27 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/10 13:45:42 by ayermeko         ###   ########.fr       */
>>>>>>> ae4401940f75b7c92f8d1bf7f82b5cfb6b81a11e
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
<<<<<<< HEAD
	Zombie			 *horde;
	std::string		  str_input;
	int				  num_input;
	std::stringstream ss;
	
	std::cout << "Enter the numbers of zombies: ";
	std::getline(std::cin, str_input);
	ss << str_input;
	ss >> num_input;
	horde = zombieHorde(num_input, "cyril");
	delete[] horde;
	return 0;
	return 0;
=======
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
>>>>>>> ae4401940f75b7c92f8d1bf7f82b5cfb6b81a11e
}
