/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:59:42 by ghwa              #+#    #+#             */
/*   Updated: 2024/03/04 15:59:42 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv) {
	if (argc < 2) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (1);
	}
	for (int i = 1; i < argc; ++i) {
		std::string arg = argv[i];
		for (char &c : arg) {
			std::cout << (char)std::toupper(c);
		}
	}
	std::cout << std::endl;
	return (0);
}