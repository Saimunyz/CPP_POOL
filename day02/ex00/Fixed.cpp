/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:12:04 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/15 15:49:50 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0), _bits(8) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & rhs) : _bits(8) {
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (float)(this->_value / (1 << _bits));
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = (raw * (1 << _bits));
}

Fixed &	Fixed::operator=(Fixed const & rhs) {
	std::cout << "Assignation operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_value = rhs.getRawBits();
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.getRawBits();
	return (o);
}
