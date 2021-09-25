/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:50:44 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/25 17:42:35 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) : _type("Unknown type") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const & rhs) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = rhs;
}

Animal::~Animal(void) {
	std::cout << "Animal default destructor called" << std::endl;
}

Animal &	Animal::operator=(Animal const & rhs) {
	if (this == &rhs)
		return *this;
	this->_type = rhs.getType();
	return *this;
}

std::string	Animal::getType(void) const {
	return this->_type;
}

void	Animal::setType(std::string type) {
	this->_type = type;
}
