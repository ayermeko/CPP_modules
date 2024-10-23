/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:17:13 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/23 09:24:03 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice : public AMateria
{
    private:
        /* data */
    public:
        Ice(void);
        Ice(const Ice &src);
        Ice &operator=(const Ice &src);
        ~Ice();

        AMateria*       clone() const;
        void            use(ICharacter& target);
};
