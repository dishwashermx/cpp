/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:49:02 by ghwa              #+#    #+#             */
/*   Updated: 2024/09/04 17:58:44 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
	public:
		Cat();
		Cat(const Cat &other);
		Cat& operator=(const Cat& other);
		virtual ~Cat();
		void makeSound() const;
} ;

#endif