/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:02:23 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/31 14:58:49 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("Default Name"), grade(150) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
    if (this == &src)
        return (*this);
    this->grade = src.grade;
    return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : name(src.name)
{
    *this = src;
}

Bureaucrat::~Bureaucrat(void) {}

const std::string &Bureaucrat::getName(void) const
{
    return (this->name);
}

const int &Bureaucrat::getGrade(void) const
{
    return (this->grade);
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &src)
{
    out << src.getName() << ", bureaucrat grade " << src.getGrade() << ".\n"; 
}
