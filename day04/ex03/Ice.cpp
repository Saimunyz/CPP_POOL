/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:25:09 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/25 18:42:03 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice(void) : AMateria("ice") {
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::~Ice(void) {
	std::cout << "Ice default destructor called" << std::endl;
}

Ice::Ice(Ice const & rhs) {
	std::cout << "Ice copy constructor called" << std::endl;
	*this = rhs;
}

Ice &	Ice::operator=(Ice const & rhs) {
	if (rhis == &rhs)
		return *this;
	else
		AMateria::operator=(rhs);
}

AMateria *	Ice::clone(void) const {
	return (new Ice(*this))
}

void	Ice::use(ICharacter & target) {
	std::cout << "* shoots an ice bolt at " << target.getNmae() << " *" << std::endl;
}


