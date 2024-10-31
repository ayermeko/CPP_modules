/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:53:19 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/31 15:33:05 by ayermeko         ###   ########.fr       */
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
        static const int    MAX_VAL = 1;
        static const int    MIN_VAL = 150;
    public:
        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);
        Bureaucrat &operator=(const Bureaucrat &src);
        Bureaucrat(const Bureaucrat &src);
        ~Bureaucrat(void);

        class GradeTooHighException : public std::exception
        {
            const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            const char *what() const throw();
        };

        const std::string &getName(void) const;
        const int &getGrade(void) const;

        void incrementGrade(void);
        void decrementGrade(void);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &src);
