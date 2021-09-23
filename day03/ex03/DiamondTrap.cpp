/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 16:05:20 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/23 14:56:32 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), _name("Unknown") {
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
	ClapTrap::_name += "_clap_name";
	std::cout << "Diamondtrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name) {
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
	std::cout << "Default constructor created " << "DiamondTrap - " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & rhs) {
	std::cout << "Diamondtrap copy constructor called" << std::endl;
	*this = rhs;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

std::string DiamondTrap::getName(void) const {return this->_name;}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & rhs) {
	std::cout << "Diamondtrap assignation operator called" << std::endl;
	if (this == &rhs)
		return *this;
	ClapTrap::operator=(rhs);
	_name = rhs.getName();
	return *this;
}

void	DiamondTrap::attack(std::string const & target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) {
	std::cout << _name << " DiamondTrap name" << std::endl;
	std::cout << this->ClapTrap::_name << " ClapTrap name" << std::endl;
}

std::ostream & operator<<(std::ostream & o, DiamondTrap const & rhs) {
	o << rhs.getName();
	return o;
}
