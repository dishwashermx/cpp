/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:06:21 by ghwa              #+#    #+#             */
/*   Updated: 2024/09/03 15:40:20 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	name = ("[SC4V-TP]");
	_hp = 100;
	_energy = 50;
	_dmg = 20;
	std::cout << "Scavbot activated." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->name = name;
	_hp = 100;
	_energy = 50;
	_dmg = 20;
	std::cout << this->name << " pops a battery and whirrs to life." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	this->name = (other.name + "-clone");
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
	std::cout << name << " falls apart." << std::endl;
}

void ScavTrap::attackMsg() {
	std::cout << name << " shoots a loose spring at ";
}

void ScavTrap::defendMsg() {
	std::cout << name << ": CLANG!!! B-BbzzzZZZ-TT" << std::endl;
}

void ScavTrap::repairMsg() {
	std::cout << name << " slaps on more duct tape." << std::endl;
}

void ScavTrap::noHp() {
	std::cout << "More parts fall of " << name << "." << std::endl;
}

void ScavTrap::noEnergy() {
	std::cout << name << "'s gears creaks and stalls." << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << name << " widens its stance, performing Guard mode." << std::endl;
	_hp *= 2;
	_dmg /= 2;
	_energy /= 2;
}
