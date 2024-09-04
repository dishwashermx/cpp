/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 16:17:00 by ghwa              #+#    #+#             */
/*   Updated: 2024/09/04 14:02:57 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
	FragTrap F1;
	ClapTrap C2("Clappy");
	ScavTrap T2("Scavvy");
	DiamondTrap D("Diddy");

	F1.highFivesGuys();
	F1.attack("Clappy");
	C2.takeDamage(40);
	T2.guardGate();
	T2.takeDamage(200);
	F1.beRepaired(10);
	D.whoAmI();
	D.attack("Clappy");
	C2.takeDamage(20);
	return (0);
}