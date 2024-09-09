/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:49:47 by ghwa              #+#    #+#             */
/*   Updated: 2024/09/04 18:00:34 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog Constructor called" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog &other) : Animal(other) {
	this->type = (other.type);
	std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog Copy Assignment called" << std::endl;
	if (this != &other)
		this->type = (other.type);
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Dog Sound" << std::endl;
}
