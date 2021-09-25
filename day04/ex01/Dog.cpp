/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 21:52:14 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/25 17:10:00 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal(), _brain(new Brain()) {
	this->_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const & rhs) : _brain(new Brain(*rhs._brain)) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = rhs;
}

Dog::~Dog(void) {
	delete _brain;
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

void	Dog::setIdea(std::string idea) {
	this->_brain->setIdea(idea);
}

std::string	Dog::getIdea(unsigned int i) const {
	return this->_brain->getIdea(i);
}
