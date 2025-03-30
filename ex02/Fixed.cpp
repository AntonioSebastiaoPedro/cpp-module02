/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:43:52 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/30 11:20:50 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed(): fixedValue(0) {}

Fixed::Fixed( const int value )
{
	this->fixedValue = value << this->fractionalBits;
}

Fixed::Fixed( const float value )
{
	this->fixedValue = roundf(value * (1 << this->fractionalBits));
}

Fixed::Fixed(const Fixed& fixed)
{
	*this = fixed;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	this->fixedValue = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed() {}

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

std::ostream &operator<<( std::ostream &stream, Fixed const &fixed)
{
	stream << fixed.toFloat();
	return ( stream );
}

bool Fixed::operator>( const Fixed& fixed ) const
{
	return ( this->getRawBits() > fixed.getRawBits() );
}

bool Fixed::operator<( const Fixed& fixed ) const
{
	return ( this->getRawBits() < fixed.getRawBits() );
}

bool Fixed::operator==( const Fixed& fixed ) const
{
	return ( this->getRawBits() == fixed.getRawBits() );
}

bool Fixed::operator>=( const Fixed& fixed ) const
{
	return ( this->getRawBits() >= fixed.getRawBits() );
}

bool Fixed::operator<=( const Fixed& fixed ) const
{
	return ( this->getRawBits() <= fixed.getRawBits() );
}

bool Fixed::operator!=( const Fixed& fixed ) const
{
	return ( this->getRawBits() != fixed.getRawBits() );
}


Fixed Fixed::operator+( const Fixed& fixed ) const
{
	Fixed sum;

	sum.setRawBits( this->getRawBits() + fixed.getRawBits() );
	return ( sum );
}

Fixed Fixed::operator-( const Fixed& fixed ) const
{
	Fixed subtraction;

	subtraction.setRawBits( this->getRawBits() - fixed.getRawBits() );
	return ( subtraction );
}

Fixed Fixed::operator*( const Fixed& fixed ) const
{
	Fixed product;
	
	product.setRawBits( (this->getRawBits() * fixed.getRawBits()) >> this->fractionalBits );
	return ( product );
}

Fixed Fixed::operator/( const Fixed& fixed ) const
{
	Fixed quotient;

	if (fixed.getRawBits() == 0)
		return ( Fixed( 0 ) );
	quotient.setRawBits( (this->getRawBits() << this->fractionalBits) / fixed.getRawBits() );
	return ( quotient );
}

Fixed& Fixed::operator++( void )
{
	this->fixedValue++;
	return ( *this );
}

Fixed Fixed::operator++( int )
{
	Fixed prevFixed = *this;
	this->fixedValue++;
	
	return ( prevFixed );
}

Fixed& Fixed::operator--( void )
{
	this->fixedValue--;
	return ( *this );
}

Fixed Fixed::operator--( int ) 
{
	Fixed prevFixed = *this;
	this->fixedValue--;

	return ( prevFixed );
}

Fixed& Fixed::min( Fixed& first, Fixed& second )
{
	return ( first < second ? first : second );
}

const Fixed& Fixed::min( const Fixed& first, const Fixed& second )
{
	return ( first < second ? first : second );
}

Fixed& Fixed::max( Fixed& first, Fixed& second )
{
	return ( first > second ? first : second );
}

const Fixed& Fixed::max( const Fixed& first, const Fixed& second )
{
	return ( first > second ? first : second );
}
