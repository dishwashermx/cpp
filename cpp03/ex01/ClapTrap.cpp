/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:49:32 by ghwa              #+#    #+#             */
/*   Updated: 2024/09/03 15:33:13 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("[CL4P-TP]"), _hp(10), _energy(10), _dmg(0) {
	std::cout << "Clapbot activated." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), _hp(10), _energy(10), _dmg(0) {
    std::cout << name << " fizzed alive and glows faintly." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name + "-clone"), _hp(other._hp), _energy(other._energy), _dmg(other._dmg) {
    std::cout << this->name << " fizzed alive and glows faintly." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    std::cout << this->name << " morphes into " << other.name << std::endl;
    if (this != &other) {
        this->name = other.name + "-morph";
        this->_hp = other._hp;
        this->_energy = other._energy;
        this->_dmg = other._dmg;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << name << " breaks down again." << std::endl;
}

void ClapTrap::attackMsg() {
	std::cout << name << "'s servos extend toward ";
}

void ClapTrap::defendMsg() {
	std::cout << name << ": ...c-ccreEEEAAKKK" << std::endl;
}

void ClapTrap::repairMsg() {
	std::cout << name << " turns on and turns off." << std::endl;
}

void ClapTrap::noHp() {
	std::cout << name << "'s circuits fry and shortcircuits." << std::endl;
}

void ClapTrap::noEnergy() {
	std::cout << name << " sputters and powers down." << std::endl;
}

void ClapTrap:: attack(const std::string& target) {
	if (_hp < 1)
		this->noHp();
	else if (_energy < 1)
		this->noEnergy();
	else
	{
		_energy -= 1;
		attackMsg();
		std::cout << target << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	_hp -= amount;
	defendMsg();
	std::cout << name << " takes " << amount << " points of damage." << std::endl;
	if (_hp < 1)
        std::cout << name << " is destroyed!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hp < 1)
		noHp();
	else if (_energy < 1)
		noEnergy();
	else {
		repairMsg();
		std::cout << name << " heals for " << amount << " points of health." << std::endl;
		_energy -= 1;
	}
}