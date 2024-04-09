/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:33:03 by ghwa              #+#    #+#             */
/*   Updated: 2024/04/09 12:58:01 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void) {
	PhoneBook phonebook;
	std::string	userInput;

	while (true) {
		std::cout << "Enter a command (ADD, SEARCH, EXIT):" << std::endl;
		std::cin >> userInput;
		if (userInput == "ADD") {
			std::string firstName, lastName, nickname, phoneNumber, darkestSecret;
			std::cout << "Enter first name: ";
			std::cin >> firstName;
			std::cout << "Enter last name: ";
			std::cin >> lastName;
			std::cout << "Enter nickname: ";
			std::cin >> nickname;
			std::cout << "Enter phone number: ";
			std::cin >> phoneNumber;
			std::cout << "Enter darkest secret: ";
			std::cin >> darkestSecret;
			phonebook.addContact(Contact(firstName, lastName, nickname, phoneNumber, darkestSecret));
		}
		else if (userInput == "SEARCH") {
			phonebook.displayContacts();
			phonebook.searchContact();
		}
		else if (userInput == "EXIT")
			break ;
	}
	return (0);
}