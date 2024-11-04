/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationFrom.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:27:18 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/04 16:22:36 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>
#include <cstdlib>
#include <ctime>

class AForm;

class ShrubberyCreationFrom : public AForm
{
	private:
		ShrubberyCreationFrom(void);
		void executeConcrete() const;
	public:
		ShrubberyCreationFrom(const std::string &target);
		ShrubberyCreationFrom(const ShrubberyCreationFrom &src);
		ShrubberyCreationFrom &operator=(const ShrubberyCreationFrom &src);
		~ShrubberyCreationFrom(void);
};
