/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:49:47 by ghwa              #+#    #+#             */
/*   Updated: 2024/09/09 10:55:31 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(), brain(new Brain()) {
	this->type = "Cat";
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other), brain(new Brain(*other.brain)) {
	std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &other) {
	std::cout << "Cat Copy Assignment called" << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		*brain = *other.brain;
	}
	return *this;
}

Cat::~Cat() {
	delete brain;
	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}
