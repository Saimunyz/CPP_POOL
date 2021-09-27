/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:39:53 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/27 15:21:05 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure(void) : AMateria("cure") {
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::~Cure(void) {
	std::cout << "Cure default destructor called" << std::endl;
}

Cure::Cure(Cure const & rhs) {
	std::cout << "Cure copy constructor called" << std::endl;
	*this = rhs;
}

Cure &	Cure::operator=(Cure const & rhs) {
	if (this == &rhs)
		return *this;
	else
	{
		AMateria::operator=(rhs);
		return *this;
	}
}

AMateria *	Cure::clone(void) const {
	return (new Cure(*this));
}

void	Cure::use(ICharacter & target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
