/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:43:46 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/30 07:03:53 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int fixedValue;
		static const int fractionalBits = 8;
	
	public:
		Fixed();
		Fixed( const int value );
		Fixed( const float value );
		Fixed(const Fixed& Fixed);
		Fixed& operator=(const Fixed& Fixed);
		~Fixed();
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		
};

std::ostream &operator<<( std::ostream &strean, Fixed const &fixed );

# endif