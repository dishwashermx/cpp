/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:27:02 by ghwa              #+#    #+#             */
/*   Updated: 2024/08/28 14:44:33 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"


int main( void ) {
	Point a(0, 0);
	Point b(10, 10);
	Point c (10, -10);
	Point point(1, -2);
	
	bool result = Point::bsp(a, b, c, point);
	std::cout << result << std::endl;
	return (result);
}