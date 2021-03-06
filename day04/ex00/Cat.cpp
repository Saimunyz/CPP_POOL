/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 22:02:53 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/25 17:09:20 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : Animal() {
	this->_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const & rhs) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = rhs;
}

Cat::~Cat(void) {
	std::cout << "Cat default destructor called" << std::endl;
}

Cat &	Cat::operator=(Cat const & rhs) {
	if (this == &rhs)
		return *this;
	this->_type = rhs.getType();
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "Meow meow" << std::endl;
}
