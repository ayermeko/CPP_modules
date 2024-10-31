/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:02:23 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/31 15:27:25 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("Default Name"), grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    if (grade > MIN_VAL)
        throw GradeTooLowException();
    if (grade < MAX_VAL)
        throw GradeTooHighException();
    this->grade = grade;
}

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

void Bureaucrat::incrementGrade(void) {}

void Bureaucrat::decrementGrade(void) {}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &src) {
    out << src.getName() << ", bureaucrat grade " << src.getGrade() << ".\n";
    return (out);
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade is too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade is too low!");
}