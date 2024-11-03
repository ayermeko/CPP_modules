/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:27:08 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/03 14:23:36 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	protected:
		const std::string _name;
		const std::string _target;
		bool			  _signed;
		const int 		  _signGrade;
		const int		  _executeGrade;
		static const int  MAX_GRADE = 1;
		static const int  MIN_GRADE = 150;
		AForm();
		static void validateGrades(int signGrade, int executeGrade);
		virtual void executeConcrete() const = 0;

	public:
		AForm(std::string &name, std::string &target, int signGrade, int executeGrade);
		AForm(const AForm &src);
		AForm &operator=(const AForm &src);
		virtual ~AForm();

		class GradeTooHighException : public std::exception
		{
			const char *what() const throw();	
		};
		class GradeTooLowException : public std::exception
		{
			const char *what() const throw();	
		};
		class UnsignedFromException : public std::exception
		{
			const char *what() const throw();	
		};
		
		const std::string &getName() const;
		const std::string &getTarget() const;
		bool  getSigned() const;
		int	  getSignGrade() const;
		int   getExecuteGrade() const;
		void  beSigned(const Bureaucrat &src);
		void execute(Bureaucrat const &executor) const;
};
