/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:16:20 by ghwa              #+#    #+#             */
/*   Updated: 2024/04/23 14:26:34 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB {
	public:
		HumanB(const std::string name);
		~HumanB();
		void attack() const;
		void setWeapon(Weapon& weapon);
	private:
		std::string name;
		Weapon* weapon;
} ;