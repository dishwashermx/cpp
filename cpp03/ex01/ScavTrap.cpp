/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:06:21 by ghwa              #+#    #+#             */
/*   Updated: 2024/09/02 15:18:30 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : name("[SC4V-TP]"), _hp(100), _energy(50), _dmg(20) {
	std::cout << "Scavbot activated." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : name(name), _hp(100), _energy(50), _dmg(20) {
    std::cout << name << " pops a battery and whirrs to life." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : name(other.name + "-clone"), _hp(other._hp), _energy(other._energy), _dmg(other._dmg) {
    std::cout << this->name << " pops a battery and whirrs to life." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    std::cout << this->name << " morphes into " << other.name << std::endl;
    if (this != &other) {
        this->name = other.name + "-morph";
        this->_hp = other._hp;
        this->_energy = other._energy;
        this->_dmg = other._dmg;
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << getName() << "falls apart." << std::endl;
}


void ScavTrap::attackMsg() {
	std::cout << getName() << " shoots a loose spring at ";
}

void ScavTrap::defendMsg() {
	std::cout << getName() << ": CLANG!!! B-BbzzzZZZ-TT" << std::endl;
}

void ScavTrap::repairMsg() {
	std::cout << getName() << " slaps on more duct tape." << std::endl;
}

void ScavTrap::noHp() {
	std::cout << "More parts fall of " << getName() << "." << std::endl;
}

void ScavTrap::noEnergy() {
	std::cout << getName() << "'s gears creaks and stalls." << std::endl;
}
