/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:32:17 by ghwa              #+#    #+#             */
/*   Updated: 2024/10/01 09:24:22 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const int numAnimals = 6;
    Animal** animals = new Animal*[numAnimals];

    for (int i = 0; i < numAnimals; ++i) {
        if (i < numAnimals / 2) {
            animals[i] = new Dog();
        } else {
            animals[i] = new Cat();
        }
    }
    for (int i = 0; i < numAnimals; ++i)
        animals[i]->makeSound();
    for (int i = 0; i < numAnimals; ++i)
        delete animals[i];
    delete[] animals;

    return 0;
}
