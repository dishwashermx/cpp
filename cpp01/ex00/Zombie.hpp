/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:48:37 by ghwa              #+#    #+#             */
/*   Updated: 2024/08/29 13:46:19 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Zombie {
	public:
		Zombie();
		Zombie(std::string& string);
		~Zombie();
		void announce();
		Zombie* newZombie(std::string name);
		void randomChump(std::string name);
	private:
		std::string name;
};