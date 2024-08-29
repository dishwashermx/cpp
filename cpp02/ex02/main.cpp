/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:27:02 by ghwa              #+#    #+#             */
/*   Updated: 2024/08/28 11:07:14 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int main( void ) {
	Fixed a;
	Fixed b(1.5f);

	std::cout << "\ntesting comparison operators" << std::endl;
	std::cout << (a > b) << std::endl;
	std::cout << (b < a) << std::endl;
	std::cout << (a >= b) << std::endl;
	std::cout << (b <= a) << std::endl;
	std::cout << (a == b) << std::endl;
	std::cout << (a != a) << std::endl;

	std::cout << "\ntesting arithmatic operators" << std::endl;
	std::cout << (a + b) << std::endl;
	std::cout << (a - b) << std::endl;
	std::cout << (a * b) << std::endl;
	std::cout << (a / b) << std::endl;

	std::cout << "\ntesting increment/decrement operators" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return (0);
}