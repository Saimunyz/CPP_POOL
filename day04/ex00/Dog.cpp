/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 21:52:14 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/25 17:09:29 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal() {
	this->_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const & rhs) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = rhs;
}

Dog::~Dog(void) {
	std::cout << "Dog default destructor called" << std::endl;
}

Dog &	Dog::operator=(Dog const & rhs) {
	if (this == &rhs)
		return *this;
	this->_type = rhs.getType();
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "Woof woof" << std::endl;
}
