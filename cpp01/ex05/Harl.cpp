/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:39:24 by ghwa              #+#    #+#             */
/*   Updated: 2024/05/16 14:19:09 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <unordered_map>

Harl::Harl() {
	std::cout << "Contructor called" << std::endl;
}

Harl::~Harl() {
	std::cout << "Destructor called" << std::endl;
}

void Harl::complain(std::string level) {
	int i;
	std::string levelArray[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (i = 0; i < 5; i++) {
		if (levelArray[i] == level)
			break;
	}
	switch(i) {
		case 0:
			debug();
			break;
		case 1:
			info();
			break;
		case 2:
			warning();
			break;
		case 3:
			error();
			break;
		case 4:
			ignore();
			break;
	}
}

void Harl::debug() {
	std::cout << "HARL//DEBUG" << std::endl;
}

void Harl::info() {
	std::cout << "HARL//INFO" << std::endl;
}

void Harl::warning() {
	std::cout << "HARL//WARNING" << std::endl;
}

void Harl::error() {
	std::cout << "HARL//ERROR" << std::endl;
}

void Harl::ignore() {
	std::cout << "HARL//IGNORE" << std::endl;
}