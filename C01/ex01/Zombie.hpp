/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:03:32 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/10 13:48:06 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <sstream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(void);
        ~Zombie(void);
        Zombie(std::string Name);

        void announce(void);
        void setName(std::string Name);
};

Zombie* zombieHorde(int N, std::string name);
