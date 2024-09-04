/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:06:21 by ghwa              #+#    #+#             */
/*   Updated: 2024/09/04 14:00:34 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap() {
	this->name = ("[D14DM-TP]");
	this->_hp = FragTrap::_hp;
	this->_energy = ScavTrap::_energy;
	this->_dmg = FragTrap::_dmg;
	std::cout << "Diamondbot activated." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
	this->name = name;
	this->_hp = FragTrap::_hp;
	this->_energy = ScavTrap::_energy;
	this->_dmg = FragTrap::_dmg;
	std::cout << this->name << " steps out of the refracted light." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), FragTrap(other), ScavTrap(other) {
	this->name = (other.name + "-clone");
	std::cout << this->name << " steps out of the refracted light." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
	std::cout << this->name << " morphes into " << other.name << std::endl;
	if (this != &other) {
		this->name = other.name + "-morph";
		this->_hp = other._hp;
		this->_energy = other._energy;
		this->_dmg = other._dmg;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << name << " is reduced to carbon." << std::endl;
}

void DiamondTrap::attackMsg() {
	ScavTrap::attackMsg();
}

void DiamondTrap::defendMsg() {
	std::cout << name << ": SAJKDHASLAJDLJSALJDLKSAHL" << std::endl;
}

void DiamondTrap::repairMsg() {
	std::cout << name << " polishes its surface." << std::endl;
}

void DiamondTrap::noHp() {
	std::cout << name << " is scratched :(" << std::endl;
}

void DiamondTrap::noEnergy() {
	std::cout << name << " has water stains :(" << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "I am " << name << ", formerly known as " << ClapTrap::name << std::endl;
}
