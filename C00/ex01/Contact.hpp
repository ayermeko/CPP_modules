/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:50:58 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/07 19:02:19 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>
# include <iomanip>

typedef std::string str;

class Contact
{
	private:
		str 	first_name;
		str 	last_name;
		str 	nick_name;
		str 	phone_number;
		str 	secret;
	public:
		Contact(void);
		~Contact(void);
		
		Contact(str fn, str ln, str nn, str pn, str s);
		void	printContact(void);
};

#endif