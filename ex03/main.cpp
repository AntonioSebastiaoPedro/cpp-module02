/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:42:03 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/30 18:05:19 by ansebast         ###   ########.fr       */
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

	std::cout << "\nAdditional test cases:" << std::endl;

	Point d(0, 0);
	Point e(5, 5);
	Point f(0, 10);
	
	Point p1(1, 1);
	Point p2(2, 8);
	Point p3(6, 6);
	Point p4(0, 5);
	
	std::cout << "Point p1 inside the triangle: " << (bsp(d, e, f, p1) ? "Yes" : "No") << std::endl;
	std::cout << "Point p2 inside the triangle: " << (bsp(d, e, f, p2) ? "Yes" : "No") << std::endl;
	std::cout << "Point p3 outside the triangle: " << (bsp(d, e, f, p3) ? "Yes" : "No") << std::endl;
	std::cout << "Point p4 on the edge of the triangle: " << (bsp(d, e, f, p4) ? "Yes" : "No") << std::endl;
	
	return 0;
}