/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:01:10 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/25 18:38:47 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(void) : _type("None") {
	std::cout << "AMaterial default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type) {
	std::cout << "AMaterial " << this->_type << " constructor called" << std::endl;
}

AMateria::~AMateria(void) {
	std::cout << "AMaterial default destructor called" << std::endl;
}

AMateria::AMateria(AMateria const & rhs) {
	*this = rhs;
}

AMateria &	AMateria::operator=(AMateria const & rhs) {
	if (this == &rhs)
		return *this;
	this->_type = rhs._type;
	return *this;
}

std::string	AMateria::getType(void) const {
	return this->_type;
}

void	AMateria::use(ICharacter & target) {
	std::cout << "No material to use on " << targe.getName() << std::endl;
}

std::ostream &	operator<<(std::ostream & o, AMateria const & rhs)
{
	o << rhs.getType();
	return o;
}

