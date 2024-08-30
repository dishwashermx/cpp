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

ClapTrap::ClapTrap() : name("[Cl4P-TP]"){
	std::cout << "Clapbot activated." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name) {
	std::cout << name << " activated." << std::endl;
	_hp = 10;
	_energy = 10;
	_dmg = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << this.name << " cloned." << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other) {
	std::cout << other.name << " morphed into " this.name << std::endl;
	this->_hp = other._hp;
	this->_energy = other._energy;
	this->_dmg = other._dmg;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << name << " terminated." << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	std::cout << _name << "attacks " << _target << \
	", causing " << _dmg << " points of damage." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << _name << "takes " << amount << " of damage." << std::endl;
	_hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << _name << " repairs for " << amount << " of hp." << std::endl;
}