/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:49:47 by ghwa              #+#    #+#             */
/*   Updated: 2024/09/04 17:59:02 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat Constructor called" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat &other) : Animal(other) {
	this->type = (other.type);
	std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat Copy Assignment called" << std::endl;
	if (this != &other)
		this->type = (other.type);
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Cat Sound" << std::endl;
}
