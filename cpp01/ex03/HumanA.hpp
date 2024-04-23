/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:00:15 by ghwa              #+#    #+#             */
/*   Updated: 2024/04/23 12:09:54 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA {
	public:
		HumanA(const std::string& humanAName, Weapon& weapon);
		~HumanA();
		void attack() const;
	private:
		std::string name;
		Weapon& weapon;
} ;