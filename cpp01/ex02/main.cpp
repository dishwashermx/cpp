/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:30:11 by ghwa              #+#    #+#             */
/*   Updated: 2024/04/18 15:41:03 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string stringREF = str;

	std::cout << str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	return (0);
}