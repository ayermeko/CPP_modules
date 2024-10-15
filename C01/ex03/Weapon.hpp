/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:23:38 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/11 13:23:39 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string Type);
        ~Weapon(void);

        std::string const	&getType(void);
        void                setType(std::string Type);
};

