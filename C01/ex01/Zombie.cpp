/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:53:38 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/09 21:02:24 by ayermeko         ###   ########.fr       */
=======
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:08:16 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/10 13:49:33 by ayermeko         ###   ########.fr       */
>>>>>>> ae4401940f75b7c92f8d1bf7f82b5cfb6b81a11e
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {}

<<<<<<< HEAD
Zombie::~Zombie(void)
{
    std::cout << this->name << " is gone!" << std::endl;
}

Zombie::Zombie(std::string Name) : name(Name) {}

=======
Zombie::~Zombie(void) 
{
    std::cout << this->name << ": is gone" << std::endl;
}

>>>>>>> ae4401940f75b7c92f8d1bf7f82b5cfb6b81a11e
void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

<<<<<<< HEAD
void Zombie::setName(std::string name)
{
	this->name = name;
=======
void Zombie::setName(std::string Name)
{
    this->name = Name;
>>>>>>> ae4401940f75b7c92f8d1bf7f82b5cfb6b81a11e
}