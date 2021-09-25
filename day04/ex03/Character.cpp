/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 20:54:48 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/25 21:08:34 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(void) {
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string name) : _name(name) {
	std::cout << "Character " << this->_name << " constructor called" << std::endl;
}

Character::Character(Character const & rhs) {
	*this = rhs;
	std::cout << "Character copy constructor called" << std::endl;

}

Character::~Character(void) {
	std::cout << "Character default destructor called" << std::endl;
}

Character &	Character::operator==(Character const & rhs) {
	if (this == &rhs)
		return *this;
	this->_name = rhs._name;
	return *this;
}
