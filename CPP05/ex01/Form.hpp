/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:54:30 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/01 21:11:08 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string const _name;
        bool              _isSigned;
        const int         _signGrade;
        const int         _executeGrade;
        static const int    MAX_VAL = 1;
        static const int    MIN_VAL = 150;
    public:
        Form(void);
        Form(const Form &src);
        Form &operator=(const Form &src);
        ~Form(void);
};

std::ostream &operator<<(std::ostream &out, const Form &src);