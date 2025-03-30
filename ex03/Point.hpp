/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 11:48:11 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/30 17:44:07 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef POINT
# define POINT

# include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point( void );
		Point( const Point& point );
		Point& operator=( const Point& point );
		~Point( void );

		Point( const float x, const float y );
		Point( const Fixed x, const Fixed y );

		Fixed getX( void ) const;
		Fixed getY( void ) const;


		bool operator==( const Point& point ) const;
};

Fixed calcArea( Point const p1, Point const p2, Point const p3 );
bool isEdge( Point const p1, Point const p2, Point const point );
bool isVertex( Point const vertex, Point const point );
bool bsp( Point const p1, Point const p2, Point const p3, Point const point );

# endif