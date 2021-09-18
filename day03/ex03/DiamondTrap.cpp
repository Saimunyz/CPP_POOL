/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 16:05:20 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/18 18:59:22 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap(){
	this->_name = ClapTrap::_name;
	ClapTrap::_name += "_clap_name";
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
	std::cout << "Diamondtrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") {
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
	std::cout << "Default constructor created " << "DiamondTrap - " << name << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & rhs) {
	std::cout << "Diamondtrap copy constructor called" << std::endl;
	*this = rhs;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & rhs) {
	std::cout << "Diamondtrap assignation operator called" << std::endl;
	if (this == &rhs)
		return *this;
	this->_name = rhs.getName();
	this->_hitpoints = rhs.getHitpoints();
	this->_energy = rhs.getEnergy();
	this->_damage = rhs.getDamage();
	return *this;
}

void	DiamondTrap::attack(std::string const & target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) {
	std::cout << this->_name << "DiamondTrap name" << std::endl;
	std::cout << ClapTrap::_name << "ClapTrap name" << std::endl;
}
