/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:53:23 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/09 21:04:18 by ayermeko         ###   ########.fr       */
=======
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:03:32 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/10 13:48:06 by ayermeko         ###   ########.fr       */
>>>>>>> ae4401940f75b7c92f8d1bf7f82b5cfb6b81a11e
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <sstream>

class Zombie
{
<<<<<<< HEAD
	private:
		std::string name;
	public:
		Zombie(void);
		~Zombie(void);

		Zombie(std::string Name);
		void    announce(void);
		void	setName(std::string);
};

Zombie *zombieHorde(int number, std::string Name);
=======
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
>>>>>>> ae4401940f75b7c92f8d1bf7f82b5cfb6b81a11e
