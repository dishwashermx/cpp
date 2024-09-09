/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:32:17 by ghwa              #+#    #+#             */
/*   Updated: 2024/09/09 12:10:59 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	Animal* animal = new Animal();
	animal->makeSound;
	const Animal* a = new Dog();
	const Animal* b = new Cat();
	delete a;//should not create a leak
	delete b;

	return 0;
}