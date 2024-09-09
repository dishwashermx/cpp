/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:49:47 by ghwa              #+#    #+#             */
/*   Updated: 2024/09/09 10:49:48 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
public:
	Brain();
	Brain(const Brain &other);
	Brain& operator=(const Brain& other);
	~Brain();

	std::string ideas[100];  // Public array of 100 string ideas
};

#endif
