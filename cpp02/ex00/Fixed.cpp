/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:40:00 by ghwa              #+#    #+#             */
/*   Updated: 2024/08/26 11:24:03 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructer called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
	this->_value = other._value;
	std::cout << "Copy constructer called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &other) {
	this->_value = other._value;
	std::cout << "Copy assignment constructer called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	return(this->_bits);
}

void Fixed::setRawBits(int const raw) {
	this->_bits = raw;
}