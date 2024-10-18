/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:51:23 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/18 15:40:46 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap something("Adam");
    something.attack("Monster");
    something.takeDamage(1234);
    something.beRepaired(2000);
    something.attack("Monster");
    return 0;
}
