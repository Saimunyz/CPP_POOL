/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:50:44 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/24 21:43:51 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) : _type("Unknown type") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const & rhs) {
	*this = rhs;
}

Animal::~Animal(void) {
	std::cout << "Animal default destructor called";
}

Animal &	Animal::operator=(Animal const & rhs) {
	if (this == &rhs)
		return *this;
	this->_type = rhs.getType();
}

std::string	Animal::getType(void) const {
	return this->_type;
}

void	Animal::setType(std::string type) {
	this->_type = type;
}

void	Animal::makeSound(void) const {
	std::cout << "Some strange sounds" << std::endl;
}
