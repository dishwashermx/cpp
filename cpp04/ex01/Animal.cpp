/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:12:07 by ghwa              #+#    #+#             */
/*   Updated: 2024/09/04 17:43:54 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(const Animal &other) {
	this->type = (other.type);
	std::cout << "Animal Copy Constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << "Animal Copy Assignment called" << std::endl;
	if (this != &other)
		this->type = (other.type);
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal Destructor called" << std::endl;
}

void Animal::makeSound() const {
	std::cout << "Animal Sound" << std::endl;
}

std::string Animal::getType() const {
	return(this->type);
}