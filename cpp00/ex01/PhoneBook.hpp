/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 13:51:03 by ghwa              #+#    #+#             */
/*   Updated: 2024/03/27 09:36:30 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <iomanip>

class PhoneBook {
	public:
		PhoneBook() {
			;
		}
		void printheader() {
			for (int i = 0; i < 56;i++)
				std::cout << "_";
			std::cout << std::endl;
			std::cout << "|" << std::setw(10) << "First Name" << "|";
			std::cout << std::setw(10) << "Last Name" << "|";
			std::cout << std::setw(10) << "Nickname" << "|";
			std::cout << std::setw(10) << "Phone No." << "|";
			std::cout << std::setw(10) << "Secret" << "|" << std::endl;
		}
	private:
} ;
