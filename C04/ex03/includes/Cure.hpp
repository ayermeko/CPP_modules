/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:17:01 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/23 09:23:44 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Cure : public AMateria
{
    private:
        /* data */
    public:
        Cure(void);
        Cure(const Cure &src);
        Cure &operator=(const Cure &src);
        ~Cure(void);

        AMateria*   clone() const;
        void        use(ICharacter& target);
};
