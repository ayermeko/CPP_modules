/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 12:53:45 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/02 14:11:35 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Default Form"), _isSigned(false), _gradeSign(150), _executeSign(150) {}

Form::Form(const std::string &name, const int gradeSign, const int executeSign) : _name(name), _isSigned(false), _gradeSign(gradeSign), _executeSign(executeSign)
{
}

Form::Form(const Form &src) : _name(src._name), _isSigned(src._isSigned), _gradeSign(src._gradeSign), _executeSign(src._executeSign)
{
}

Form &Form::operator=(const Form &src)
{
    // TODO: insert return statement here
}

Form::~Form(void) {}

const std::string &Form::getName(void) const
{
    return (_name);
}

bool Form::getSigned(void) const
{
    return (_isSigned);
}

int Form::getSignGrade() const
{
    return (_gradeSign);
}

int Form::getSignExecute() const
{
    return (_executeSign);
}

void Form::beSigned(const Bureaucrat &src)
{
}

const char *Form::GradeTooHighException::what() const throw() {
    return ("Grade is too high!");
}

const char *Form::GradeTooLowException::what() const throw() {
    return ("Grade is too low!");
}

std::ostream &operator<<(std::ostream &out, const Form &src)
{
    // TODO: insert return statement here
}
