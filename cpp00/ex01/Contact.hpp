/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 09:36:44 by ghwa              #+#    #+#             */
/*   Updated: 2024/04/02 12:32:51 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <iomanip>

class Contact {
	public:
		Contact();
		~Contact();
		
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickname() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;

		void setFirstName(std::string newFirstName);
		void setLastName(std::string newLastName);
		void setNickname(std::string newNickname);
		void setPhoneNumber(std::string newPhoneNumber);
		void setDarkestSecret(std::string newDarkestSecret);
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
} ;