/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:53:19 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/03 14:25:35 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private:
        const std::string   name;
        int                 grade;
        static const int    MAX_GRADE = 1;
        static const int    MIN_GRADE = 150;
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
        void signForm(AForm &src);
		void executeForm(AForm const & form) const;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &src);
