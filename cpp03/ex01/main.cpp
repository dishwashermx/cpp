/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 16:17:00 by ghwa              #+#    #+#             */
/*   Updated: 2024/09/24 13:03:36 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	ClapTrap C2("Clappy");
	ScavTrap T2("Scavvy");

	T2.attack("Scavvy");
	C2.takeDamage(40);
	T2.guardGate();
	T2.takeDamage(200);
	return (0);
}