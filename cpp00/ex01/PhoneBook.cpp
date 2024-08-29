/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:10:12 by ghwa              #+#    #+#             */
/*   Updated: 2024/08/29 10:45:59 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <sstream>
#include "PhoneBook.hpp"
#include "Contact.hpp"


PhoneBook::PhoneBook() {

}

PhoneBook::~PhoneBook() {

}

void PhoneBook::addContact(const Contact& contact) {
	if (contacts.size() < 8) {
		contacts.push_back(contact);
	} else {
		contacts[oldestIndex] = contact;
		oldestIndex = (oldestIndex + 1) % 8;
	}
}

void PhoneBook::displayContacts() const {
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|Index     |First Name|Last Name |Nickname  |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (size_t i = 0; i < contacts.size(); ++i) {
		std::cout << "|         " << i << "|" << truncateText(contacts[i].getFirstName()) << "|" << truncateText(contacts[i].getLastName())
		<< "|" << truncateText(contacts[i].getNickname()) << "|" << std::endl;
	}
}

void PhoneBook::searchContact() const {
	char index;
	if (contacts.size() > 0) {
		std::cout << "Enter the index of the contact you want to display: ";
		std::cin >> index;
		std::cout << index << std::endl;
		if (index >= '0' && index <= '9') {
			int intIndex = index - '0';
			if (intIndex >= 0 && intIndex < static_cast<int>(contacts.size())) {
				std::cout << "First Name: " << contacts[intIndex].getFirstName() << std::endl;
				std::cout << "Last Name: " << contacts[intIndex].getLastName() << std::endl;
				std::cout << "Nickname: " << contacts[intIndex].getNickname() << std::endl;
				std::cout << "Phone Number: " << contacts[intIndex].getPhoneNumber() << std::endl;
				std::cout << "Darkest Secret: " << contacts[intIndex].getDarkestSecret() << std::endl;
			}
			else 
				std::cout << "Invalid index. Please try again." << std::endl;
		}
		else
			std::cout << "Invalid input. Please enter a valid digit." << std::endl;
	}
}

std::string PhoneBook::truncateText(const std::string& text) const {
	std::stringstream string;
	if (text.length() < 9) 
		string << std::setw(10) << std::right << text;
	else
		string << text.substr(0, 9) + ".";
	return string.str();
}