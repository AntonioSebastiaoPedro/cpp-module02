/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:42:03 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/30 11:32:54 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Fixed.hpp"

int main()
{
	Fixed a(5);
	Fixed b(2.5f);
    

	Fixed sum = a + b;
	Fixed diff = a - b;
	Fixed prod = a * b;
	Fixed quot = a / b;
    
	std::cout << "Arithmetic Operators:" << std::endl;
	std::cout << "5 + 2.5 = " << sum << std::endl;
	std::cout << "5 - 2.5 = " << diff << std::endl;
	std::cout << "5 * 2.5 = " << prod << std::endl;
	std::cout << "5 / 2.5 = " << quot << std::endl;
    
	std::cout << "\nComparison Operators:" << std::endl;
	std::cout << a << " > " << b << ": " << (a > b) << std::endl;
	std::cout << a << " < " << b << ": " << (a < b) << std::endl;
	std::cout << a << " >= " << b << ": " << (a >= b) << std::endl;
	std::cout << a << " <= " << b << ": " << (a <= b) << std::endl;
	std::cout << a << " == " << b << ": " << (a == b) << std::endl;
	std::cout << a << " != " << b << ": " << (a != b) << std::endl;
    
	Fixed c(1.0f);
	std::cout << "\nIncrement/Decrement Operators:" << std::endl;
	std::cout << "Initial Value: " << c << std::endl;
	std::cout << "pre-increment (++var): " << ++c << std::endl; 
	std::cout << "post-increment (var++): " << c++ << std::endl; 
	std::cout << "Value after post-increment: " << c << std::endl;
	std::cout << "pre-decrement (--var): " << --c << std::endl;
	std::cout << "post-decrement (var--): " << c-- << std::endl;
	std::cout << "Value after post-decrement: " << c << std::endl;
    
	Fixed d(10);
	Fixed e(15);
	std::cout << "\nmin and max functions:" << std::endl;
	std::cout << "min(" << d << "," << e << "): " << Fixed::min(d, e) << std::endl;
	std::cout << "max(" << d << "," << e << "): " << Fixed::max(d, e) << std::endl;
    
	const Fixed f(20);
	const Fixed g(5);
	std::cout << "min(" << f << "," << g << "): " << Fixed::min(f, g) << std::endl;
	std::cout << "max(" << f << "," << g << "): " << Fixed::max(f, g) << std::endl;
    
	return 0;
}