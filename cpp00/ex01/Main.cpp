/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:33:03 by ghwa              #+#    #+#             */
/*   Updated: 2024/04/02 10:32:14 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Main.hpp"

std::string toUpper(const std::string& str) {
	std::string result;

	for (char c : str) {
		result += std::toupper(c);
	}
	return (result);
}

int	main(void) {
	std::string	userInput;

	while (userInput != "EXIT") {
		std::cout << "Please enter a command (ADD, SEARCH, or EXIT):\n";
		std::cin >> userInput;
		userInput = toUpper(userInput);
		if (userInput == "ADD") {
			
		}
	}
	return (0);
}