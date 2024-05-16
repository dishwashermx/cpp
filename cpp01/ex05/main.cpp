/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:39:18 by ghwa              #+#    #+#             */
/*   Updated: 2024/05/16 14:19:32 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <stdio.h>

int main(int argc, char **argv) {
	Harl harl;
	if (argc == 2) {
		harl.complain(argv[1]);
	}
	return (0);
}