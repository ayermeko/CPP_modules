/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 21:04:37 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/01 21:06:33 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _isSigned(), _executeGrade(), _signGrade()
{
}

Form::Form(const Form &src) : _isSigned(), _executeGrade(), _signGrade()
{
}

Form &Form::operator=(const Form &src)
{
    // TODO: insert return statement here
}

Form::~Form(void)
{
}
