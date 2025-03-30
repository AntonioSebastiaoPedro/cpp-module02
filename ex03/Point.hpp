/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 11:48:11 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/30 13:51:56 by ansebast         ###   ########.fr       */
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

		Fixed getX( void ) const;
		Fixed getY( void ) const;
};

# endif