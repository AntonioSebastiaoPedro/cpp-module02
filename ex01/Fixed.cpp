/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:43:52 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/30 07:41:36 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed(): fixedValue(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed( const int value )
{
	std::cout << "Int constructor called\n";
	this->fixedValue = value << this->fractionalBits;
}

Fixed::Fixed( const float value )
{
	std::cout << "Float constructor called\n";
	this->fixedValue = roundf(value * (1 << this->fractionalBits));
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called\n";
	*this = fixed;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called\n";
	this->fixedValue = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits( void ) const
{
	return (this->fixedValue);
}

void Fixed::setRawBits( int const raw )
{
	this->fixedValue = raw;
}

float Fixed::toFloat( void ) const
{
	return ( static_cast<float> (this->fixedValue) / (1 << this->fractionalBits) );
}

int Fixed::toInt( void ) const
{
	return ( this->fixedValue >> this->fractionalBits );
}

std::ostream &operator<<( std::ostream& stream, const Fixed& fixed)
{
	stream << fixed.toFloat();
	return ( stream );
}
