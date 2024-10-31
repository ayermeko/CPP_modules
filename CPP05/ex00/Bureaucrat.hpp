/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:53:19 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/31 14:21:10 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Bureaucrat
{
    private:
        const std::string   name;
        int                 grade;
        static const int    MAX_VAL = 150;
        static const int    MIN_VAL = 1;
    public:
        Bureaucrat(void);
        Bureaucrat &operator=(const Bureaucrat &src);
        Bureaucrat(const Bureaucrat &src);
        ~Bureaucrat(void);

        const std::string &getName(void) const;
        const int &getGrade(void) const;

        void increment(void);
        void decrement(void);
};
