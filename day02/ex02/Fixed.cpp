/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:12:04 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/16 00:32:56 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_bits = 8;

Fixed::Fixed(void) : _value(0) {
	return;
}

Fixed::~Fixed(void) {
	return;
}

Fixed::Fixed(Fixed const & rhs) {
	*this = rhs;
}

Fixed::Fixed(int const value) {
	this->_value = value * (1 << Fixed::_bits);
}

Fixed::Fixed(float const value) {
	this->_value = (int) std::roundf(value * (1 << Fixed::_bits));
}

float	Fixed::toFloat(void) const {
	return (this->_value / (float)(1 << Fixed::_bits));
}

int		Fixed::toInt(void) const {
	return (this->_value / (1 << Fixed::_bits));
}

int	Fixed::getRawBits(void) const {
	return (this->_value);
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

Fixed &	Fixed::operator=(Fixed const & rhs) {
	if (this == &rhs)
		return (*this);
	this->_value = rhs.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(Fixed const & rhs) {
	Fixed	tmp;
	tmp.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (tmp);
}

Fixed	Fixed::operator-(Fixed const & rhs) {
	Fixed	tmp;
	tmp.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (tmp);
}

Fixed	Fixed::operator*(Fixed const & rhs) {
	Fixed	tmp;
	tmp.setRawBits( (this->_value * rhs.getRawBits()) >> Fixed::_bits);
	return tmp;
}

Fixed	Fixed::operator/(Fixed const & rhs) {
	Fixed	tmp;
	tmp.setRawBits(((this->_value << Fixed::_bits) / rhs.getRawBits()));
	return tmp;
}

Fixed	Fixed::operator++(void) {
	++this->_value;
	return *this;
}

Fixed	Fixed::operator--(void) {
	--this->_value;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed	oldValue(*this);
	++this->_value;
	return oldValue;
}

Fixed	Fixed::operator--(int) {
	Fixed	oldValue(*this);
	this->_value--;
	return oldValue;
}

bool	Fixed::operator==(Fixed const & rhs) const {
	return  (this->_value == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const & rhs) const {
	return  !(this->_value == rhs.getRawBits());
}

bool	Fixed::operator>(Fixed const & rhs) const {
	return  (this->_value > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const & rhs) const {
	return  (this->_value < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const & rhs) const {
	return  (this->_value >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const & rhs) const {
	return  (this->_value <= rhs.getRawBits());
}

Fixed const &	Fixed::min(Fixed const & lhs, Fixed const & rhs) {
	if (lhs.getRawBits() > rhs.getRawBits())
		return rhs;
	return lhs;
}

Fixed const &	Fixed::max(Fixed const & lhs, Fixed const & rhs) {
	if (lhs.getRawBits() > rhs.getRawBits())
		return lhs;
	return rhs;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return (o);
}
