/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:06:21 by ghwa              #+#    #+#             */
/*   Updated: 2024/09/25 14:10:55 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"


FragTrap::FragTrap() : ClapTrap() {
	name = ("[FR4G-TP]");
	_hp = 100;
	_energy = 100;
	_dmg = 30;
	std::cout << "Fragbot activated." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->name = name;
	_hp = 100;
	_energy = 100;
	_dmg = 30;
	std::cout << this->name << " pulls its pin, ready to rumble." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	this->name = (other.name + "-clone");
	std::cout << this->name << " pulls its pin, ready to rumble." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	std::cout << this->name << " morphes into " << other.name << std::endl;
	if (this != &other) {
		this->name = other.name + "-morph";
		this->_hp = other._hp;
		this->_energy = other._energy;
		this->_dmg = other._dmg;
	}
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << name << " self-implodes." << std::endl;
}

void FragTrap::attackMsg() {
	std::cout << name << " chucks a grenade at ";
}

void FragTrap::defendMsg() {
	std::cout << name << ": BEEP-BEEP BEEP-BEEEEEEP" << std::endl;
}

void FragTrap::repairMsg() {
	std::cout << name << " swallows some gunpowder." << std::endl;
}

void FragTrap::noHp() {
	std::cout << name << "'s fuse was snuffed." << std::endl;
}

void FragTrap::noEnergy() {
	std::cout << name << " ran out of explosives." << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << name << " gives itself highfives, boosting its attack." << std::endl;
	_dmg += 10;
	_energy -= 1;
}
