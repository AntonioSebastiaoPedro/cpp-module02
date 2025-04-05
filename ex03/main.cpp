/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:42:03 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/30 18:21:48 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Point.hpp"

int	main(void)
{
	Point a(0, 0);
	Point b(10, 30);
	Point c(20, 0);

	Point inside(10, 10);
	Point outside(30, 15);
	Point onEdge(10, 0);
	Point vertex(0, 0);

	std::cout << "Point inside the triangle: " << (bsp(a, b, c, inside) ? "Yes" : "No") << std::endl;
	std::cout << "Point outside the triangle: " << (bsp(a, b, c, outside) ? "Yes" : "No") << std::endl;
	std::cout << "Point on the edge of the triangle: " << (bsp(a, b, c, onEdge) ? "Yes" : "No") << std::endl;
	std::cout << "Point at a vertex of the triangle: " << (bsp(a, b, c, vertex) ? "Yes" : "No") << std::endl;
	
	return 0;
}