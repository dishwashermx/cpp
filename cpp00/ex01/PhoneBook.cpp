/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:10:12 by ghwa              #+#    #+#             */
/*   Updated: 2024/04/05 14:31:04 by ghwa             ###   ########.fr       */
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