/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 13:27:25 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/30 17:39:56 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

Point::Point( void ) : x(0), y(0) {}

Point::Point( const Point &point ) : x(point.getX()), y(point.getY()) {}

Point& Point::operator=( const Point& point )
{
	(void)point;
	return (*this);
}
Point::~Point( void ) {}

Point::Point( const float x, const float y ) : x(x), y(y) {}
Point::Point( const Fixed x, const Fixed y ) : x(x), y(y) {}

Fixed Point::getX( void ) const
{
	return ( this->x );
}
Fixed Point::getY( void ) const
{
	return ( this->y );
}

bool Point::operator==( const Point& point ) const
{
	return ( this->getX() == point.getX() && this->getY() == point.getY() );
}
