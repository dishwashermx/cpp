/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 16:17:00 by ghwa              #+#    #+#             */
/*   Updated: 2024/09/02 15:02:54 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap C1;
    ClapTrap C2("Clappy");
    ClapTrap C3(C1);
    ClapTrap C4("Trappy");
    
    C3 = C2;
    C3.attack("Clappy");
    C2.takeDamage(0);
    C4.beRepaired(1);
    C2.attack("Clapbot");
    C1.takeDamage(0);
    return (0);
}