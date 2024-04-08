/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 13:51:03 by ghwa              #+#    #+#             */
/*   Updated: 2024/04/08 14:21:03 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include "Contact.hpp"
#include "Main.hpp"

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		
		void addContact(const Contact& contact);
		void displayContacts() const;
		void searchContact() const;
		
	private:
		std::vector<Contact> contacts;
		int	oldestIndex = 0;
		std::string truncateText(const std::string& text) const;
} ;
