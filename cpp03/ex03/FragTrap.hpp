/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:06:30 by ghwa              #+#    #+#             */
/*   Updated: 2024/09/04 13:51:02 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &other);
		FragTrap& operator=(const FragTrap& other);
		~FragTrap();
		void attackMsg();
		void defendMsg();
		void repairMsg();
		void noHp();
		void noEnergy();
		void highFivesGuys();
} ;

#endif