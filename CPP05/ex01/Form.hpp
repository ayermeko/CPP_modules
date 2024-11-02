/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 12:53:42 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/02 14:40:22 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string _name;
        bool              _isSigned;
        const int         _gradeSign;
        const int         _executeSign;
        static const int  MAX_VAL = 1;
        static const int  MIN_VAL = 150;

        static void validateGrades(int signGrade, int executeGrade);
    public:
        Form(void);
        Form(const std::string &name, const int gradeSign, const int executeSign);
        Form(const Form &src);
        Form &operator=(const Form &src);
        ~Form(void);

        class GradeTooHighException : public std::exception
        {
            const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            const char *what() const throw();
        };

        const std::string &getName(void) const;
        bool  getSigned(void) const;
        int   getSignGrade() const;
        int   getSignExecute() const;

        void beSigned(const Bureaucrat &src);
};

std::ostream &operator<<(std::ostream &out, const Form &src);