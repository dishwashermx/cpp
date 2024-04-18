/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:48:37 by ghwa              #+#    #+#             */
/*   Updated: 2024/04/16 12:11:21 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Zombie {
	public:
		Zombie();
		Zombie(const std::string& string);
		~Zombie();
		void announce();
	private:
		std::string name;
};

Zombie* zombieHorde( int N, std::string name );