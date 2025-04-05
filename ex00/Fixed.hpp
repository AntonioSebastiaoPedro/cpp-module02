/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 09:33:23 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/24 16:58:17 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int fixedValue;
		static const int fractionalBits = 8;
	
	public:
		Fixed();
		Fixed(const Fixed& Fixed);
		Fixed& operator=(const Fixed& Fixed);
		~Fixed();
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

# endif