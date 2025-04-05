/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:43:52 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/30 18:12:59 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

Fixed calcArea(Point const p1, Point const p2, Point const p3)
{
	Fixed area =
	(
		( p1.getX() * ( p2.getY() - p3.getY() ) ) +
		( p2.getX() * ( p3.getY() - p1.getY() ) ) +
		( p3.getX() * ( p1.getY() - p2.getY() ) )
	) / 2;
	
	return ( area < 0 ? area * -1 : area );
}

bool isEdge(Point const p1, Point const p2, Point const point)
{
	Point vec1( point.getX() - p1.getX(), point.getY() - p1.getY() );
	Point vec2( p2.getX() - p1.getX(), p2.getY() - p1.getY() );

	Fixed crossProduct = vec1.getY() * vec2.getX() - vec1.getX() * vec2.getY();

	if (crossProduct == 0)
	{
		if (
			point.getX() >= Fixed::min(p1.getX(), p2.getX()) &&
			point.getX() <= Fixed::max(p1.getX(), p2.getX()) &&
			point.getY() >= Fixed::min(p1.getY(), p2.getY()) &&
			point.getY() <= Fixed::max(p1.getY(), p2.getY())
		)
			return ( true );
	}
	return ( false );
}

bool isVertex(Point const vertex, Point const point)
{
	return (vertex == point);
}

bool bsp(Point const p1, Point const p2, Point const p3, Point const point)
{
	if ( isVertex(p1, point) || isVertex(p2, point) || isVertex(p3, point) )
		return ( false );
	if ( isEdge(p1, p2, point) || isEdge(p2, p3, point) || isEdge(p3, p1, point) )
		return ( false );
	
	Fixed area = calcArea(p1, p2, p3);
	Fixed pointP1P2Area = calcArea(point, p1, p2);
	Fixed pointP2P3Area = calcArea(point, p2, p3);
	Fixed pointP3P1Area =  calcArea(point, p3, p1);

	Fixed sumArea = pointP1P2Area + pointP2P3Area + pointP3P1Area;

	return ( area == sumArea );
}
