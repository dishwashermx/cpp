/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:16:16 by ghwa              #+#    #+#             */
/*   Updated: 2024/04/23 14:27:08 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(const std::string name) : name(name) {
	this->weapon = NULL;
}

HumanB::~HumanB() {}

void HumanB::attack() const {
	std::cout << name << " attacks with " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon){
	this->weapon = &weapon;
}