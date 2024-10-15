/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:47:36 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/15 18:55:32 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Fixed
{
	private:
		int					_rawBits;
		static const int	fractionalBits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &src);
		Fixed	&operator=(const Fixed &src);
		~Fixed(void);

		int getRawBits(void) const;
		void setRawBits(int const raw);
};
