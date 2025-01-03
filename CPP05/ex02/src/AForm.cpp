/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:28:02 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/05 16:37:54 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

void AForm::validateGrades(int signGrade, int executeGrade)
{
    if (signGrade < MAX_GRADE || executeGrade < MAX_GRADE)
		throw GradeTooHighException();
	if (signGrade > MIN_GRADE || executeGrade > MIN_GRADE)
		throw GradeTooLowException();
}

AForm::AForm() : _name("Ordinary form"), _target("default target"), _signed(false), _signGrade(150), _executeGrade(150) {}

AForm::AForm(const std::string &name, const std::string &target, int signGrade, int executeGrade) 
	: _name(name), _target(target), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade)
{
	validateGrades(signGrade, executeGrade);
}

AForm::AForm(const AForm &src) 
	: _name(src._name), _target(src._target), _signed(src._signed), _signGrade(src._signGrade), _executeGrade(src._executeGrade)
{
	validateGrades(src._signGrade, src._executeGrade);
}

AForm &AForm::operator=(const AForm &src)
{
	if (this != &src)
	{
		this->_signed = src._signed;
	}
	return (*this);
}

AForm::~AForm() {}

const std::string &AForm::getName() const
{
	return (_name);
}

const std::string &AForm::getTarget() const
{
	return (_target);
}

bool AForm::getSigned() const
{
	return (_signed);
}

int AForm::getSignGrade() const
{
	return (_signGrade);
}

int AForm::getExecuteGrade() const
{
	return (_executeGrade);
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char *AForm::UnsignedFromException::what() const throw()
{
	return ("Form is unsigned!");
}

void AForm::beSigned(const Bureaucrat &src)
{
	if (_signed == false && src.getGrade() <= _signGrade)
		_signed = true;
	else if (_signed == true)
		std::cout << "Form " << _name << " is already signed!\n";
	else
	{
		std::cerr << "Form " << _name << " can not be signed by " << src.getName() << ": ";
		throw GradeTooLowException();
	}
}

std::ostream &operator<<(std::ostream &out, const AForm &src)
{
	out << "Form " << src.getName() << " is ";
	if (src.getSigned() == false)
		out << "not ";
	out << "signed. Sign grade is " << src.getSignGrade() << ". Execute grade is " << src.getExecuteGrade() << ". Target " << src.getTarget() << ".\n";
	return (out);
}

void AForm::execute(Bureaucrat const &executor) const
{
	if (_signed == false)
		throw UnsignedFromException();
	if (executor.getGrade() > _executeGrade)
		throw GradeTooLowException();
	executeConcrete();
}
