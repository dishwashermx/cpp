/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:45:27 by ghwa              #+#    #+#             */
/*   Updated: 2024/08/29 14:31:33 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& weaponType) : weaponType(weaponType){}
Weapon::~Weapon() {}

std::string Weapon::getType() const {
	return (weaponType);
}

void Weapon::setType(std::string newType) {
	this->weaponType = newType;
}

void Weapon::announce() {
	std::cout << weaponType << ": BraiiiiiiinnnzzzZ..." << std::endl;
}