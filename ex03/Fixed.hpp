/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:43:46 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/30 08:16:10 by ansebast         ###   ########.fr       */
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

		bool operator>( const Fixed& fixed ) const;
		bool operator<( const Fixed& fixed ) const;
		bool operator==( const Fixed& fixed ) const;
		bool operator>=( const Fixed& fixed ) const;
		bool operator<=( const Fixed& fixed ) const;
		bool operator!=( const Fixed& fixed ) const;

		Fixed operator+( const Fixed& fixed ) const;
		Fixed operator-( const Fixed& fixed ) const;
		Fixed operator*( const Fixed& fixed ) const;
		Fixed operator/( const Fixed& fixed ) const;
		
		Fixed& operator++( void );
		Fixed operator++( int );
		Fixed& operator--( void );
		Fixed operator--( int ) ;
		
		static Fixed& min( Fixed& first, Fixed& second );
		static const Fixed& min( const Fixed& first, const Fixed& second );
		static Fixed& max( Fixed& first, Fixed& second );
		static const Fixed& max( const Fixed& first, const Fixed& second );
};

std::ostream &operator<<( std::ostream &strean, Fixed const &fixed );

# endif