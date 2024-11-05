/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationFrom.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:29:05 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/05 16:33:03 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) {}

void ShrubberyCreationForm::executeConcrete() const
{
	std::srand(std::time(0));
	int r = std::rand() % 3;
	std::ofstream file((_target + "_shrubbery").c_str());
	
	if (!file)
	{
		std::cerr << "Error: Could not create file " << _target << "_shrubbery\n";
		return ;
	}
	if (r == 0)
	{
		file << "       ###\n";
		file << "      #o###\n";
		file << "    #####o###\n";
		file << "   #o#\\#|#/###\n";
		file << "    ###\\|/#o#\n";
		file << "     # }|{  #\n";
		file << "       }|{\n";
		file.close();
	}
	else if (r == 1)
	{
		file << "        v\n";
		file << "       >X<\n";
		file << "        A\n";
		file << "       d$b\n";
		file << "     .d\\$$b.\n";
		file << "   .d$i$$\\$$b.\n";
		file << "      d$$@b\n";
		file << "     d\\$$$ib\n";
		file << "   .d$$$\\$$$b\n";
		file << " .d$$@$$$$\\$$ib.\n";
		file << "     d$$i$$b\n";
		file << "    d\\$$$$@$b\n";
		file << " .d$@$$\\$$$$$@b.\n";
		file << ".d$$$$i$$$\\$$$$$$b.\n";
		file << "        ###\n";
		file << "        ###\n";
		file << "        ###\n";
	}
	else
	{
	    file << "                     - - -\n";
		file << "                   -        -  -     --    -\n";
		file << "                -                 -         -  -\n";
		file << "                                -\n";
		file << "                               -                --\n";
		file << "               -          -            -              -\n";
		file << "               -            '-,        -               -\n";
		file << "               -              'b      *\n";
		file << "                -              '$    #-                --\n";
		file << "               -    -           $:   #:               -\n";
		file << "             --      -  --      *#  @):        -   - -\n";
		file << "                          -     :@,@):   ,-**:'   -\n";
		file << "              -      -,         :@@*: --**'      -   -\n";
		file << "                       '#o-    -:(@'-@*\"'  -\n";
		file << "               -  -       'bq,--:,@@*'   ,*      -  -\n";
		file << "                          ,p$q8,:@)'  -p*'      -\n";
		file << "                   -     '  - '@@Pp@@*'    -  -\n";
		file << "                    -  - --    Y7'.'     -  -\n";
		file << "                              :@):.\n";
		file << "                             .:@:'.\n";
		file << "                           .::(@:.      \n";
	}
	std::cout << "Shrubbery created in " << _target << "_shrubbery\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery creation form", target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	if (this != &src)
		AForm::operator=(src);
	return (*this);	
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}
