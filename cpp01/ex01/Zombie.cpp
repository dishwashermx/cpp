/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:59:19 by ghwa              #+#    #+#             */
/*   Updated: 2024/08/29 12:55:32 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {}

Zombie::Zombie(std::string& string) : name(string) {}

Zombie::~Zombie() {
	std::cout << name << " died" << std::endl;
}

void Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* Zombie::newZombie(std::string name) {
	return (new Zombie(name));
}

void Zombie::randomChump(std::string name) {
	Zombie Zombie(name);
	Zombie.announce();
}