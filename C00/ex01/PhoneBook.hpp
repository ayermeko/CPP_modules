/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:51:11 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/07 18:20:12 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# define MAX_CONTACTS 8

class PhoneBook
{
	private:
		Contact contacts[MAX_CONTACTS];
		int 	id;
		str		input(const str& field_name);
		void	printTable(void);
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void add(void);
		void search(void);
};

#endif