/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 12:53:45 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/02 15:16:13 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

void Form::validateGrades(int signGrade, int executeGrade)
{
    if (signGrade < MAX_VAL || executeGrade < MAX_VAL)
		throw GradeTooHighException();
	if (signGrade > MIN_VAL || executeGrade > MIN_VAL)
		throw GradeTooLowException();
}

Form::Form(void) : _name("Default Form"), _isSigned(false), _gradeSign(150), _executeSign(150) {}

Form::Form(const std::string &name, const int gradeSign, const int executeSign) : _name(name), _isSigned(false), _gradeSign(gradeSign), _executeSign(executeSign) {
    validateGrades(gradeSign, executeSign);
}

Form::Form(const Form &src) : _name(src._name), _isSigned(src._isSigned), _gradeSign(src._gradeSign), _executeSign(src._executeSign) {
    validateGrades(src._gradeSign, src._executeSign);
}

Form &Form::operator=(const Form &src)
{
    if (this != &src)
        this->_isSigned = src._isSigned;
    return (*this);    
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
    if (_isSigned == false && src.getGrade() <= _gradeSign)
        _isSigned = true;
    else if (_isSigned == true)
        std::cout << "Form " << _name << " is already signed!\n";
    else
    {
        std::cerr << "Form " << _name << " can not be signed by " << src.getName() << ": ";
        throw GradeTooLowException();        
    }
}

const char *Form::GradeTooHighException::what() const throw() {
    return ("Grade is too high!");
}

const char *Form::GradeTooLowException::what() const throw() {
    return ("Grade is too low!");
}

std::ostream &operator<<(std::ostream &out, const Form &src)
{
    out << "Form " << src.getName() << " is ";
    if (src.getSigned() == false)
        out << "not "; 
    out << "signed. Sign grade is " << src.getSignGrade() << ". Execute grade is " << src.getSignExecute() << ".\n";
    return (out);   
}
