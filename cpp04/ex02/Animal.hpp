/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:12:05 by ghwa              #+#    #+#             */
/*   Updated: 2024/11/05 10:38:30 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
	public:
		Animal();
		Animal(const Animal &other); 
		Animal& operator=(const Animal& other);
		virtual ~Animal();

		virtual void makeSound() const = 0;
		std::string getType() const;
	protected:
		std::string type;
} ;

#endif