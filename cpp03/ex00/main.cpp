/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 16:17:00 by ghwa              #+#    #+#             */
/*   Updated: 2024/08/30 16:24:06 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap C1;
    ClapTrap C2("Clappy");
    ClapTrap C3(C1);
    ClapTrap C4("Trappy");
    C1 = C2;
    
    C1.attack("the air");
    C1.attack("the air");
    C1.attack("the air");
    C1.attack("the air");
    C1.attack("the air");
    C1.attack("the air");
    C1.attack("the air");
    C1.attack("the air");
    C1.attack("the air");
    C1.attack("the air");
    C1.attack("the air");
    C3 = C1;
    C3.attack("the ground");
    C4.takeDamage(20);
    C4.beRepaired(1);
    return (0);
}