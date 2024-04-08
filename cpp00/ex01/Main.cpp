/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:33:03 by ghwa              #+#    #+#             */
/*   Updated: 2024/04/05 15:12:03 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Main.hpp"

int	main(void) {
	PhoneBook phonebook;
	std::string	userInput;

	while (true) {
		std::cout << "Enter a command (ADD, SEARCH, EXIT):" << std::endl;
		std::cin >> userInput;
		if (userInput == "ADD") {
			std::string firstName, lastName, nickname, phoneNumber, darkestSecret;
			while (true) {
				std::cout << "Enter first name: ";
				std::cin >> firstName;
				if (!firstName.empty()) 
					break;
				std::cout << "First name cannot be empty. Please try again." << std::endl;
			}
			while (true) {
				std::cout << "Enter last name: ";
				std::cin >> lastName;
				if (!lastName.empty()) 
					break;
				std::cout << "Last name cannot be empty. Please try again." << std::endl;
			}
			while (true) {
				std::cout << "Enter nickname: ";
				std::cin >> nickname;
				if (!nickname.empty()) 
					break;
				std::cout << "Nickname cannot be empty. Please try again." << std::endl;
			}
			while (true) {
				std::cout << "Enter phone number: ";
				std::cin >> phoneNumber;
				if (!phoneNumber.empty()) 
					break;
				std::cout << "Phone number cannot be empty. Please try again." << std::endl;
			}
			while (true) {
				std::cout << "Enter darkest secret: ";
				std::cin >> darkestSecret;
				if (!darkestSecret.empty()) 
					break;
				std::cout << "Darkest secret cannot be empty. Please try again." << std::endl;
			}
		}
	}
	return (0);
}