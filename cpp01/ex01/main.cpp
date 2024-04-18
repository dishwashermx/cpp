/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:01:09 by ghwa              #+#    #+#             */
/*   Updated: 2024/04/16 12:17:19 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	int N = 5;
	std::string name = "ZOMBIE";
	Zombie* horde = zombieHorde(N, name);
	for (int i = 0; i < N; ++i) {
		horde[i].announce();
	}
	delete[] horde;
}