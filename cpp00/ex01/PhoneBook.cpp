/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:10:12 by ghwa              #+#    #+#             */
/*   Updated: 2024/04/08 15:16:00 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

void printHeader() {
	for (int i = 0; i < 56;i++)
		std::cout << "_";
	std::cout << std::endl;
	std::cout << "|" << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|";
	std::cout << std::setw(10) << "Phone Num" << "|";
	std::cout << std::setw(10) << "Secret" << "|" << std::endl;
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
	std::cout << "\tIndex\t|\tFirst Name\t|\tLast Name\t|\tNickname" << std::endl;
	for (size_t i = 0; i < contacts.size(); ++i) {
		std::cout << "\t" << i << "\t|\t" << truncateText(contacts[i].getFirstName()) << "\t|\t"
			<< truncateText(contacts[i].getLastName()) << "\t|\t" << truncateText(contacts[i].getNickname()) << std::endl;
	}
}

void PhoneBook::searchContact() const {
	int index;
	while (true) {
		std::cout << "Enter the index of the contact you want to display: ";
		std::cin >> index;
		if (index >= 0 && index < static_cast<int>(contacts.size())) {
			std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
			std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
			std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
			std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
			std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
			break ;
		}
		else
			std::cout << "Invalid index. Please try again." << std::endl;
	}
}

std::string PhoneBook::truncateText(const std::string& text) const {
	if (text.length() > 9) {
		return text.substr(0, 9) + ".";
	}
	return text;
}