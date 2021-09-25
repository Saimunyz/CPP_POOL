/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:39:53 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/25 18:42:35 by swagstaf         ###   ########.fr       */
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

Cure::Cure(Ice const & rhs) {
	std::cout << "Cure copy constructor called" << std::endl;
	*this = rhs;
}

Cure &	Cure::operator=(Cure const & rhs) {
	if (rhis == &rhs)
		return *this;
	else
		AMateria::operator=(rhs);
}

AMateria *	Cure::clone(void) const {
	return (new Ice(*this))
}

void	Cure::use(ICharacter & target) {
	std::cout << "* heals " << target.getNmae() << "'s wounds *" << std::endl;
}
