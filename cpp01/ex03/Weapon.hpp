/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:17:39 by ghwa              #+#    #+#             */
/*   Updated: 2024/04/23 11:34:44 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Weapon {
	public:
		Weapon(const std::string& weaponType);
		~Weapon();
		std::string getType() const;
		void setType(std::string newType);
		void announce();
	private:
		std::string weaponType;
} ;