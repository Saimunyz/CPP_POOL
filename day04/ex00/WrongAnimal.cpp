/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:50:44 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/25 14:33:29 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void) : _type("Unknown type") {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & rhs) {
	*this = rhs;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal default destructor called" << std::endl;
}

WrongAnimal &	WrongAnimal::operator=(WrongAnimal const & rhs) {
	if (this == &rhs)
		return *this;
	this->_type = rhs.getType();
	return *this;
}

std::string	WrongAnimal::getType(void) const {
	return this->_type;
}

void	WrongAnimal::setType(std::string type) {
	this->_type = type;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "Some wrong sounds" << std::endl;
}
