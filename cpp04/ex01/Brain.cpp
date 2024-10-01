/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:50:21 by ghwa              #+#    #+#             */
/*   Updated: 2024/09/09 10:50:22 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain Constructor called" << std::endl;
}

Brain::Brain(const Brain &other) {
	std::cout << "Brain Copy Constructor called" << std::endl;
	for (int i = 0; i < 100; ++i) {
		this->ideas[i] = other.ideas[i];
	}
}

Brain& Brain::operator=(const Brain &other) {
	std::cout << "Brain Copy Assignment called" << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; ++i) {
			this->ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain Destructor called" << std::endl;
}