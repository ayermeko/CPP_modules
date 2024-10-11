/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 09:50:47 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/11 11:54:49 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

typedef std::string string;

void newCreate(string &new_line, const string &to_find, const string &to_replace)
{
	size_t pos = 0;

	while ((pos = new_line.find(to_find, pos)) != string::npos)
	{
		new_line = new_line.substr(0, pos) + to_replace + new_line.substr(pos + to_find.length());
		pos += to_replace.length();
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Enter: ./a.out filename <string_to_find> <string_to_replace>\n"; 
		return (1);
	}

	string filename = argv[1];
	string to_find = argv[2];
	string to_replace = argv[3];
	string new_line;

	std::ifstream input(filename.c_str());
	std::ofstream output((filename + ".replace").c_str());

	if (input.fail())
	{
		std::cerr << "Error: cannot open the file!\n"; 
		return (1);
	}
	else {
		while (std::getline(input, new_line))
		{
			newCreate(new_line, to_find, to_replace);
			output << new_line << std::endl;
		}
		input.close();
		output.close();
	}
	return (0);
}
