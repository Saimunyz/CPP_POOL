/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 14:28:16 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/25 14:33:05 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void) : WrongAnimal() {
	this->_type = "Cat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & rhs) {
	*this = rhs;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat default destructor called" << std::endl;
}

WrongCat &	WrongCat::operator=(WrongCat const & rhs) {
	if (this == &rhs)
		return *this;
	this->_type = rhs.getType();
	return *this;
}

void	WrongCat::makeSound(void) const {
	std::cout << "Meow meow" << std::endl;
}
