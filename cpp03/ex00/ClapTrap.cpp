/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:49:32 by ghwa              #+#    #+#             */
/*   Updated: 2024/08/30 16:24:00 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("[Cl4P-TP]"), _hp(10), _energy(10), _dmg(0) {
    std::cout << "Clapbot activated." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), _hp(10), _energy(10), _dmg(0) {
    std::cout << name << " activated." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name + " clone"), _hp(other._hp), _energy(other._energy), _dmg(other._dmg) {
    std::cout << other.name << " cloned." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    std::cout << this->name << " morphed into " << other.name << std::endl;
    if (this != &other) {
        this->name = other.name + " morph";
        this->_hp = other._hp;
        this->_energy = other._energy;
        this->_dmg = other._dmg;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << name << " terminated." << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (_hp < 1)
		std::cout << name << " tries to get up and falls down again." << std::endl;
	else if (_energy < 1)
		std::cout << name << " sputters and powers down." << std::endl;
	else
	{
		std::cout << name << " attacks " << target << ", causing " << _dmg << " points of damage." << std::endl;
		_energy -= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << name << " takes " << amount << " of damage." << std::endl;
	_hp -= amount;
	if (_hp < 0) {
        _hp = 0;
        std::cout << name << " is destroyed!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hp < 1)
		std::cout << name << " tries to get up and falls down again." << std::endl;
	else if (_energy < 1)
		std::cout << name << " sputters and powers down." << std::endl;
	else {
		std::cout << name << " repairs for " << amount << " of hp." << std::endl;
		_energy -= 1;
	}

}